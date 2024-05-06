#include <iostream> 
#include <string>
using namespace std;

int fact(int);
int power(int, int);
int sumArr(int [], int, int);
int strLength(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + strLength(str + 1);
};

int main ()
{
//	char *str1;
//	cout<<"Enter Your name: ";
//	cin>> str1;
//	string str2 = "Huzifa Khan";
//	cout<< str2.compare("Huzaifa Khan");
	
//	char str1[20];
//	cout << "Enter your name: ";
//	cin >> str1;
//	string str2 = "Huzaifa Khan";
//	cout << str2.compare(str1);

//	tast 1
//	int factorial; 
//	cout << "Enter a number to find its factorial: ";
//	cin >> factorial;
//	cout << "Factorial of " << factorial << ": " << fact(factorial);

//	task 2
//	int base, exponent;
//	cout << "Enter base: ";
//	cin >> base;
//	cout << "Enter exponent:";
//	cin >> exponent;
//	cout << base << " to the power of " << exponent << " = " << power(base, exponent);


//	task 3
//	int arr[4] = {5, 4, 3, 2};
//	cout << "Sum of array is: " << sumArr(arr, 4, 0);


	char str[] = "Huzaifa Khan";
	cout << "length of string ==> " << strLength(str);
}

int fact(int f)
{
	if (f == 1)
	{
		return 1;
	}
	return f * fact(f - 1);
}

int power(int base, int exp)
{
	if (exp == 0)
	{ 
		return 1;
	}
	return base * power(base, exp - 1);
}

int sumArr(int arr[], int size, int index)
{
	if (index < size)
	{
		return arr[index] + sumArr(arr, size, index + 1);
	}
	return 0;
}
