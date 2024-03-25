#include <iostream>
using namespace std;

int main() {
	// task 1
//     int arr[32], num, i{0};
//    
//     cout << "Enter a number: ";
//     cin >> num;
//    
//    while (num > 0) {
//        arr[i] = num % 2;
//        num = num / 2;
//        
//        i++;
//    }
//    
//    for ( ; i >= 0; i--) {
//        cout << arr[i];
//    }



//	task 3 (bubble sorting array)
	int arr[9] = {1, 3, 5, 8, -1, 2, 6, 9, 4};
	
	cout << "Previous Array: ";
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	for (int i = 0; i < 9; i++) 
	{
		for(int j = 0; j < 9 - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	cout << "Sorted Array: ";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	







}

