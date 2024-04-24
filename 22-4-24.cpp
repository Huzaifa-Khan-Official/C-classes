#include<iostream>
using namespace std;

main() 
{
//	int a = 5;
//	int *ptr;
//	ptr = &a;
//	cout << "&a ==> " << &a << endl;
//	cout << "&ptr ==> " << &ptr << endl;
//	cout << "ptr ==> " << ptr << endl;


	int a = 5, x = 7;
	int *ptr1 = &a, *ptr2 = &x;
	cout << "&a ==> " << &a << endl << "&x ==> " << &x << endl;
	cout << "ptr1 ==> " << ptr1 << endl << "ptr2 ==> " << ptr2 << endl;
	cout << "&ptr1 ==> " << &ptr1 << endl << "&ptr2 ==> " << &ptr2 << endl;
	cout << "*(&a) ==> " << *(&a) << endl << "*(&x) ==> " << *(&x);
	ptr1 = ptr2;
	cout << "*ptr1 ==> " << *ptr1 <<  endl << "*ptr2 ==> " << *ptr2 << endl;
	*ptr1++;
	cout << "ptr1 ==> " << ptr1 << endl;
	*ptr2--;
	cout << "ptr2 ==> " << ptr2;


// multidimenstional array
//	int arr[2][2][2];
	
////	cout << "Input ----------------------" << endl;
////	for(int i = 0; i < 2 ; i++)
////	{
////		for(int j = 0; j < 2; j++)
////		{
////			for(int k = 0; k < 2; k++)
////			{
////				cout << "Value of parent row => " << i << ": child row => " << j 
////				<< ": column => " << k << ": ";
////				cin >> arr[i][j][k];
////			}
////			cout << endl;
////		}
////		cout << endl;
////	}
////
////	cout << endl;
////	cout << "Output ----------------------" << endl;
////	for(int i = 0; i < 2 ; i++)
////	{
//		for(int j = 0; j < 2; j++)
//		{
//			for(int k = 0; k < 2; k++)
//			{
//				cout << "Value of parent row => " << i << ": child row => " << j 
//				<< ": column => " << k << ": ";
//				cout << arr[i][j][k] << endl;
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
}
