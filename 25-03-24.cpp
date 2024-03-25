#include<iostream>
using namespace std;

main()
{
	
//	task 1 (initialize 2D array, input, output that array)
//	int rows = 3;
//	int cols = 4;
//	int arr[rows][cols];
//	
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j<cols; j++)
//		{
//			cout << "Enter marks of student: " << i + 1 << ", subject: " << j + 1 << ": ";
//			cin >> arr[i][j];
//		}
//	}
//	
//	cout << endl;
//	cout << "Output....";
//	cout << endl;
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j < cols; j++)
//		{
//			cout << "Marks of student: " << i + 1 << ", subject: " << j + 1 << " = " << arr[i][j];
//			cout << endl;
//		}
//	}


//	task 2 (scaling 5 numbers in each subject)
//	int rows = 3;
//	int cols = 4;
//	int arr[rows][cols];
//	
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j<cols; j++)
//		{
//			cout << "Enter marks of student: " << i + 1 << ", subject: " << j + 1 << ": ";
//			cin >> arr[i][j];
//			arr[i][j] += 5;
//		}
//	}
//	
//	cout << endl;
//	cout << "Output....";
//	cout << endl;
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j < cols; j++)
//		{
//			cout << "Marks of student: " << i + 1 << ", subject: " << j + 1 << " = " << arr[i][j];
//			cout << endl;
//		}
//	}


//	task 3 (scaling 5 numbers in each subject except subject no. 3)
//	int rows = 3;
//	int cols = 4;
//	int arr[rows][cols];
//	
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j<cols; j++)
//		{
//			cout << "Enter marks of student: " << i + 1 << ", subject: " << j + 1 << ": ";
//			cin >> arr[i][j];
//			if (j != 3)
//			{	
//				arr[i][j] += 5;
//			}
//		}
//	}
//	
//	cout << endl;
//	cout << "Output....";
//	cout << endl;
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j < cols; j++)
//		{
//			cout << "Marks of student: " << i + 1 << ", subject: " << j + 1 << " = " << arr[i][j];
//			cout << endl;
//		}
//	}


//	task 4 (scaling 5 numbers in each subject except 3rd student)
//	int rows = 3;
//	int cols = 4;
//	int arr[rows][cols];
//	
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j<cols; j++)
//		{
//			cout << "Enter marks of student: " << i + 1 << ", subject: " << j + 1 << ": ";
//			cin >> arr[i][j];
//			arr[i][j] += 5;
//		}
//	}
//	
//	cout << endl;
//	cout << "Output....";
//	cout << endl;
//	for(int i = 0; i < rows; i++)
//	{		
//		for(int j = 0; j < cols; j++)
//		{
//			if (i != 2) 
//			{
//				arr[i][j] += 5;
//			}
//			cout << "Marks of student: " << i + 1 << ", subject: " << j + 1 << " = " << arr[i][j];
//			cout << endl;
//		}
//	}



//	task 5 (sum all students marks)
//	int rows = 3;
//	int cols = 4;
//	int arr[rows][cols];
//	
//	for(int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j<cols; j++)
//		{
//			cout << "Enter marks of student: " << i + 1 << ", subject: " << j + 1 << ": ";
//			cin >> arr[i][j];
//		}
//	}
//	
//	cout << endl;
//	cout << "Output....";
//	cout << endl;
//	for(int i = 0; i < rows; i++)
//	{	
//		int sum = 0;	
//		for(int j = 0; j < cols; j++)
//		{
//			cout << "Marks of student: " << i + 1 << ", subject: " << j + 1 << " = " << arr[i][j];
//			sum += arr[i][j];
//			cout << endl;
//		}
//		cout << "Total marks of student: " << i + 1 << " = " << sum;
//		cout << endl;
//	}





//	task 5 (sum of those values that have same rows and same columns)
	int rows = 3;
	int cols = 4;
	int arr[rows][cols];
	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j<cols; j++)
		{
			cout << "Enter marks of student: " << i + 1 << ", subject: " << j + 1 << ": ";
			cin >> arr[i][j];
		}
	}
	
	cout << endl;
	cout << "Output....";
	cout << endl;
	int sum = 0;
	for(int i = 0; i < rows; i++)
	{				
		for(int j = 0; j < cols; j++)
		{
			cout << "Marks of student: " << i + 1 << ", subject: " << j + 1 << " = " << arr[i][j];
			if (i == j)
			{				
				sum += arr[i][j];
			}
			cout << endl;
		}	
	}

	cout << "Sum of those values that have same rows and columns = " << sum;
	
}
