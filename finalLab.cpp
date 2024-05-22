#include <iostream>
#include <vector>
using namespace std;

vector<int> findUniqueNumbers(const vector<int>& arr) {
    vector<int> uniqueNumbers;

    for (size_t i = 0; i < arr.size(); ++i) {
        bool isUnique = true;
        for (size_t j = 0; j < arr.size(); ++j) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueNumbers.push_back(arr[i]);
        }
    }

    return uniqueNumbers;
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> uniqueNumbers = findUniqueNumbers(arr);

    cout << "Unique numbers: ";
    for (int num : uniqueNumbers) {
        cout << num << " ";
    }
}
