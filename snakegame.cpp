#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
vector<pair<int, int>> tail;

void Setup() {
    gameOver = false;
    dir = RIGHT; // Start moving to the right
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    tail.clear();
}

void Draw() {
    system("clear"); // Use "cls" for Windows
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else {
                bool print = false;
                for (int k = 0; k < tail.size(); k++) {
                    if (tail[k].first == j && tail[k].second == i) {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print) cout << " ";
            }

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Score: " << score << endl;
}

bool kbhit() {
    static const int STDIN = 0;
    static bool initialized = false;

    if (!initialized) {
        termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initialized = true;
    }

    int bytesWaiting;
    ioctl(STDIN, FIONREAD, &bytesWaiting);
    return bytesWaiting > 0;
}

void Input() {
    if (kbhit()) {
        switch (getchar()) {
            case 'a':
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd':
                if (dir != LEFT) dir = RIGHT;
                break;
            case 'w':
                if (dir != DOWN) dir = UP;
                break;
            case 's':
                if (dir != UP) dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void Logic() {
    pair<int, int> prev = make_pair(x, y);
    pair<int, int> prev2;
    for (int i = 0; i < tail.size(); i++) {
        prev2 = tail[i];
        tail[i] = prev;
        prev = prev2;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    for (int i = 0; i < tail.size(); i++) {
        if (tail[i].first == x && tail[i].second == y) {
            gameOver = true; // Snake collides with itself
        }
    }

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        tail.push_back(make_pair(x, y));
    }
}

int main() {
    srand(time(0));
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        usleep(100000); // Sleep for 100 milliseconds
    }
    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}
