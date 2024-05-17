#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int low, int high) {
    // Base case: If low is greater than high, the key is not found
    if (low > high) {
        return -1;
    }
    
    // Calculate mid index
    int mid = low + (high - low) / 2;
    cout << "\nMid: " << mid;
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

//void arrTry(int *arr)
//{
//	arr[1] = 30;
//}

void printFibonacci(int n, int first = 1, int second = 1) {
	if (n == 0) return;
	
	cout << first << " ";
	printFibonacci(n - 1, second, first + second);
}


int main() {
//    int arr[5] = { 10, 20, 30, 40, 50 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int key = 20;
//    
//    // Perform binary search
//    int index = binarySearch(arr, key, 0, size - 1);
//    
//    if (index != -1) {
//        cout << "Element found at index: " << index << endl;
//    } else {
//        cout << "Element not found in the array" << endl;
//    }
//    
//    return 0;

//	cout << "before ==> " << &arr[1] << endl;
//	arrTry(arr);
//	for(int i = 0; i < sizeof(arr) / 4; i++)
//	{
//		cout << arr[i] << " ";
//	}

	int n;
    cout << "Enter the number of Fibonacci numbers to find: ";
    cin >> n;

    cout << "The first " << n << " Fibonacci numbers are: ";
    printFibonacci(n);

}

