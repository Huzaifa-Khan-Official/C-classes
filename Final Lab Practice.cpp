#include <iostream>
#include <array>
#include <string>
using namespace std;


// struct stud{
//     string name;
//     int rollNo;
//     array<int, 4> marks;
// };

// int linearSearch(int arr[], int key, int index, int size) {
//     if (index >= size) {
//         return -1;
//     }
    
//     if (arr[index] == key) {
//         return index;
//     }
    
//     return linearSearch(arr, key, index + 1, size);
// }

// int linearSearch2(array<int, 6> arr, int key, int index, int size) {
//     if (index >= size) {
//         return -1;
//     }
    
//     if (arr[index] == key) {
//         return index;
//     }
    
//     return linearSearch2(arr, key, index + 1, size);
// }

int binarySearch(int arr[], int key, int low, int high) {
    // Base case: If low is greater than high, the key is not found
    if (low > high) {
        return -1;
    }
    
    // Calculate mid index
    int mid = low + (high - low) / 2;
    
    // If the middle element is the key, return its index
    if (arr[mid] == key) {
        return mid;
    }
    
    // If the key is less than the middle element, search the left subarray
    else if (key < arr[mid]) {
        return binarySearch(arr, key, low, mid - 1);
    }
    
    // If the key is greater than the middle element, search the right subarray
    else {
        return binarySearch(arr, key, mid + 1, high);
    }
}


int main() {
    // passing array using builtIn method
    // int arr[]{2, 3, 5, 6, 7, 1};
    // int key;
    // cout << "Enter a number to search its index: ";
    // cin >> key;
    // int size = sizeof(arr) / sizeof(arr[0]);
    
    
    // int index = linearSearch(arr, key, 0 , size);
    
    
    // if (index != -1) {
    //     cout << "Element found at " << index;
    // } else {
    //     cout << "Element not found";
    // }
    
    // passing array using library defined method
    // array<int, 6> arr{2, 3, 5, 6, 7, 1};
    // int key;
    // cout << "Enter a number to search its index: ";
    // cin >> key;
    // int size = arr.size();
    
    
    // int index = linearSearch2(arr, key, 0 , size);
    
    
    // if (index != -1) {
    //     cout << "Element found at " << index;
    // } else {
    //     cout << "Element not found";
    // }
    
    // stud student1;
    // cout << "Name: " << student1.name;
    // cout << "\nRoll No.: " << student1.rollNo;
    // for(int i =0; i < sizeof(student1.marks) / 4; i++)
    // {
    //     cout << "\nMarks of " << i + 1 << " subject: " << student1.marks[i];
    // }
    
    // array<stud, 3> students;
        
    // for(int i = 0; i < students.size(); i++) {
    //     cout<<"Enter the name of the student no."<<i+1<<": ";
    //     getline(cin, students[i].name);
    // } 
    
    // for(int i = 0; i < students.size(); i++) {
    //     cout<<"Enter the roll no. of the student no."<<i+1<<": ";
    //     cin >> students[i].rollNo;
    // } 
    
    // cout<<"\n\nData";
    // for(int i = 0; i < students.size(); i++)
    // {
    //     cout<<"\t\tEmployee " << i + 1;
    // }
    
    // cout << "\nName.";
    // for(int i = 0; i < students.size(); i++)
    // {
    //     cout<<"\t\t"<<students[i].name;
    // }
    
    // cout << "\nRoll No.";
    // for(int i = 0; i < students.size(); i++)
    // {
    //     cout<<"\t\t"<<students[i].rollNo;
    // }
    
    
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    
    // Perform binary search
    int index = binarySearch(arr, key, 0, size - 1);
    
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    
    
    
    
    
    
    
}