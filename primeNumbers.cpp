#include <iostream>
#include <array>
#include <vector>
using namespace std;

// struct stud {
//     vector<int> marks;
// } s1;

// Function to check if a number is prime
bool isPrime(int num, int i = 2) {
    // Base cases
    if (num <= 2) return (num == 2) ? true : false;
    if (num % i == 0) return false;
    if (i * i > num) return true;

    // Check for next divisor
    return isPrime(num, i + 1);
}

// Recursive function to find prime numbers
void findPrimes(int n, int currentNum, vector<int> &primes) {
    // Base case: if we have found n primes, return
    if (primes.size() == n) return;

    // Check if current number is prime
    if (isPrime(currentNum)) {
        primes.push_back(currentNum);
    }

    // Recur for the next number
    findPrimes(n, currentNum + 1, primes);
}

int main() {
    
    // for(int i = 0; i < 5; i++)
    // {
    //     int marks;
    //     cout << "Enter marks of subject " << i + 1 << ": ";
    //     cin >> marks;
    //     s1.marks.push_back(marks);
    // }
    
    //  for (const int& i : s1.marks) {
    //     cout << i << "  ";
    //  }
     
     
    int n;
    cout << "Enter the number of prime numbers to find: ";
    cin >> n;

    // Vector to store prime numbers
   vector<int> primes;

    // Start finding primes from number 2
    findPrimes(n, 2, primes);

    // Output the found prime numbers
    cout << "First " << n << " prime numbers are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
     
     
     
     
     
     
     
     
     
     
     
}