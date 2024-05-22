#include<iostream>
using namespace std;

//void inputArr(int *arr, int size) {
//	for(int i = 0; i < size; i++) {
//		cout << "Enter marks of subject " << i + 1 << ": ";
//		cin >> arr[i];
//	}
//}
//
//void outputArr(int *arr, int size)
//{
//	cout << "\nMarks Output: ";
//	for (int i = 0; i < size; i++) {
//		cout << "\n\tSubject " << i + 1 << ": " << arr[i];
//	}	
//}

void inputArr(int arr[][6], int size, int marksSize) { 
	for(int i = 0; i < size; i++) {
		cout << "\nPlease enter the marks of student " << i + 1;
		for(int j = 0; j < marksSize; j++) {
			cout << "\n\tSubject " << j + 1 << ": ";
			cin >> arr[i][j];
		}
	}
}

void outputArr(int arr[][6], int size, int marksSize) {
	cout << endl << endl << endl;
	for(int i = 0; i < size; i++) {
		cout << "\nMarks of student " << i + 1;
		for(int j = 0; j < marksSize; j++) {
			cout << "\n\tSubject " << j + 1 << ": " << arr[i][j];
		}
	}
}

main()
{
//	int arr[5];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	
//	inputArr(arr, size);
//	outputArr(arr, size);

//	int arr[5][6];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int marksSize = sizeof(arr[0]) / sizeof(int);
//	
//	inputArr(arr, size, marksSize);
//	outputArr(arr, size, marksSize);


	char arr[3][4];
	
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "\nOutput" << endl;
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}
