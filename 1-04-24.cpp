#include<iostream>
using namespace std;

main()
{
//	matrix input, output
//	int rows, cols;
//	cout << "Enter the number of rows: ";
//	cin >> rows;
//	cout << "Enter the number of columns: ";
//	cin >> cols;
//	
//	int matrix[rows][cols];
//	for (int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j < cols; j++)
//		{
//			cout << "Enter the value for row " << i + 1 << " col " << j + 1 << ": ";
//			cin >> matrix[i][j];
//		}
//		cout << endl;
//	}
//	
//	
//	for (int i = 0; i < rows; i++)
//	{
//		for(int j = 0; j < cols; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}

//	matrix addition
//	int row1, col1, row2, col2;
//	cout << "For Matrix 1 ---------------";
//	cout << endl;
//	cout << "Enter the number of rows for matrix 1: ";
//	cin >> row1;
//	cout << "Enter the number of columns for matrix 1: ";
//	cin >> col1;
//	
//	int matrix1[row1][col1];
//	for (int i = 0; i < row1; i++)
//	{
//		for(int j = 0; j < col1; j++)
//		{
//			cout << "Enter the value for row " << i + 1 << " col " << j + 1 << ": ";
//			cin >> matrix1[i][j];
//		}
//		cout << endl;
//	}
//	
//	
//	cout << "For Matrix 2 ---------------";
//	cout << endl;
//	cout << "Enter the number of rows for matrix 2: ";
//	cin >> row2;
//	cout << "Enter the number of columns for matrix 2: ";
//	cin >> col2;
//	
//	int matrix2[row2][col2];
//	for (int i = 0; i < row2; i++)
//	{
//		for(int j = 0; j < col2; j++)
//		{
//			cout << "Enter the value for row " << i + 1 << " col " << j + 1 << ": ";
//			cin >> matrix2[i][j];
//		}
//		cout << endl;
//	}
//	
//	if (row1 == row2 && col1 == col2) 
//	{
//		int sumMatrix[row1][col2];
//		for (int i = 0; i < row1; i++)
//		{
//			for (int j = 0; j < col1; j++)
//			{
//				sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
//			}
//		}
//		
//		cout << "Sum Matrix -----------------";
//		cout << endl;
//		
//		for (int i = 0; i < row1; i++)
//		{
//			for (int j = 0; j < col1; j++)
//			{
//				cout << sumMatrix[i][j] << " ";
//			}
//			cout << endl;
//		}
//	} else 
//	{
//		cout << "Number of rows and columns of both matrixes must be equal!";
//	}



//	matrix multiplication
	int row1, col1, row2, col2;
	cout << "For Matrix 1 ---------------";
	cout << endl;
	cout << "Enter the number of rows for matrix 1: ";
	cin >> row1;
	cout << "Enter the number of columns for matrix 1: ";
	cin >> col1;
	
	int matrix1[row1][col1];
	for (int i = 0; i < row1; i++)
	{
		for(int j = 0; j < col1; j++)
		{
			cout << "Enter the value for row " << i + 1 << " col " << j + 1 << ": ";
			cin >> matrix1[i][j];
		}
		cout << endl;
	}
	
	
	cout << "For Matrix 2 ---------------";
	cout << endl;
	cout << "Enter the number of rows for matrix 2: ";
	cin >> row2;
	cout << "Enter the number of columns for matrix 2: ";
	cin >> col2;
	
	int matrix2[row2][col2];
	for (int i = 0; i < row2; i++)
	{
		for(int j = 0; j < col2; j++)
		{
			cout << "Enter the value for row " << i + 1 << " col " << j + 1 << ": ";
			cin >> matrix2[i][j];
		}
		cout << endl;
	}
	
	if (col1 == row2) 
	{
		
		int productMatrix[row2][col1];
		for (int i = 0; i < row2; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				int sum = 0;
				for (int k = 0; k < col1; k++)
				{
					sum += matrix1[i][k] * matrix2[k][j];
				}
				productMatrix[i][j] = sum;
			}
		}
		
		cout << "Multiplication Matrix -----------------";
		cout << endl;
		
		for (int i = 0; i < row2; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				cout << productMatrix[i][j] << " ";
			}
			cout << endl;
		}
	} else 
	{
		cout << "Number of columns of matrix 1 must be equal to number of rows of matrix 2!";
	}


}
