#include<iostream>
using namespace std;


void inputMatrix(int *ptr)
{
	cout << endl << "In Function ------------------------" << endl;
//	input 2D array using pointers
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Enter value of row: " << i + 1 << " column: " << j + 1 << " : ";
			cin >> *ptr;
			ptr++;
		}
		cout << endl;
	}
}

void outputMatrix(int *ptr)
{
	cout << endl << "In Function ------------------------" << endl;
	//	printing 2D array using pointers
	for (int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Value at row: " << i + 1 << " column: " << j + 1 << " : " << *ptr;
			ptr++;
			cout << endl;
		}
		cout << endl;
	}
}



void inputMatrix2(int ptr[][2])
{
	cout << endl << "In Function ------------------------" << endl;
//	input 2D array using pointers
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Enter value of row: " << i + 1 << " column: " << j + 1 << " : ";
			cin >> ptr[i][j];
		}
		cout << endl;
	}
}

void outputMatrix2(int ptr[][2])
{
	cout << endl << "In Function ------------------------" << endl;
	//	printing 2D array using pointers
	for (int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << "Value at row: " << i + 1 << " column: " << j + 1 << " : " << ptr[i][j];
			cout << endl;
		}
		cout << endl;
	}
}

main()
{
//	int arr[2][2];
	
//	input 2D array using pointers
//	int *ptr = arr[0];
//	for(int i = 0; i < 2; i++)
//	{
//		for(int j = 0; j < 2; j++)
//		{
//			cout << "Enter value of row: " << i + 1 << " column: " << j + 1 << " : ";
//			cin >> *ptr;
//			ptr++;
//			cout << endl;
//		}
//		cout << endl;
//	}
	
//	printing 2D array using pointers
//	int *ptr2 = arr[0];
//	for (int i = 0; i < 2; i++)
//	{
//		for(int j = 0; j < 2; j++)
//		{
//			cout << "Value at row: " << i + 1 << " column: " << j + 1 << " : " << *ptr2;
//			ptr2++;
//			cout << endl;
//		}
//	}

//  1st way
//	int arr[2][2];
	
//	input 2D array using pointers
//	int *ptr = arr[0];
//	inputMatrix(ptr);
//	outputMatrix(ptr);

//	2nd way
//	int arr[2][2];
//	
//	inputMatrix(&arr[0][0]);
//	outputMatrix(&arr[0][0]);


//	3rd way
//	int arr[2][2];
//	
//	inputMatrix(arr[0]);
//	outputMatrix(arr[0]);


//	4th way
	int arr[2][2];
	
	inputMatrix2(arr);
	outputMatrix2(arr);
}
