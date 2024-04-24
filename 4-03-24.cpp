#include<iostream>
using namespace std;

main()
{
//	task 1

// 	int rows, i, k, j;
// 	cout << "Enter the number of rows: ";
// 	cin >> rows;
	
// 	for(i = 1; i<= rows; i++)
// 	{
// 		for(k = 1; k <= rows - i; k++) 
// 		{	
// 			cout << " ";
// 		}
// 		for(j = 1; j <= i; j++)
// 		{
// 			cout << j;
// 		}
// 		cout << endl;
// 	}


// task 2

    // int rows, i, k, j;
    // cout << "Enter the number of rows: ";
    // cin >> rows;
    
    // for (i = rows; i >= 1; i--)
    // {
    //     for (k = 1; k <= rows-i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    
    // task 3
    
    // int rows, i, k, j, l, m, n, o, p;
    // cout << "Enter the number of rows: ";
    // cin >> rows;
    
    // for (i = 1; i <= rows; i++)
    // {
    //     for (k = 1; k <= rows-i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << " ";
    //     for (l = i; l >= 1; l--)
    //     {
    //         cout << l;
    //     }
    //     cout << endl;
    // }
    // for (m = rows; m >= 1; m--)
    // {
    //     for (n = 1; n <= rows-m; n++)
    //     {
    //         cout << " ";
    //     }
    //     for (o = m; o >= 1; o--)
    //     {
    //         cout << o;
    //     }
    //     cout << " ";
    //     for (p = m; p >= 1; p--)
    //     {
    //         cout << p;
    //     }
    //     cout << endl;
    // }


    // // task 4
    
    // int rows, i, k, j, l, m, n, o, p;
    // cout << "Enter the number of rows: ";
    // cin >> rows;
    
    // for (i = 1; i <= rows; i++)
    // {
    //     for (k = 1; k <= rows-i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << " ";
    //     for (l = i - 1; l >= 1; l--)
    //     {
    //         cout << l;
    //     }
    //     cout << endl;
    // }
    // for (m = rows; m >= 1; m--)
    // {
    //     for (n = 1; n <= rows-m; n++)
    //     {
    //         cout << " ";
    //     }
    //     for (o = m; o >= 1; o--)
    //     {
    //         cout << o;
    //     }
    //     cout << " ";
    //     for (p = m - 1; p >= 1; p--)
    //     {
    //         cout << p;
    //     }
    //     cout << endl;
    // }
    
    
    // task 5
    
    // int rows, i, k, j, l, m, n, o, p;
    // cout << "Enter the number of rows: ";
    // cin >> rows;
    
    // for (i = 1; i <= rows; i++)
    // {
    //     for (k = 1; k <= rows-i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << " ";
    //     for (l = i - 1; l >= 1; l--)
    //     {
    //         cout << l;
    //     }
    //     cout << endl;
    // }
    // for (m = rows - 1; m >= 1; m--)
    // {
    //     for (n = 1; n <= rows-m; n++)
    //     {
    //         cout << " ";
    //     }
    //     for (o = m; o >= 1; o--)
    //     {
    //         cout << o;
    //     }
    //     cout << " ";
    //     for (p = m - 1; p >= 1; p--)
    //     {
    //         cout << p;
    //     }
    //     cout << endl;
    // }


    // task 6
    
    int rows, i, k, j, l, m, n, o, p;
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    for (i = 1; i <= rows; i++)
    {
        for (k = 1; k <= rows-i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
               cout << j; 
            } else {
                cout << " ";
            }
            
        }
        for (l = i - 1; l >= 1; l--)
        {
            if (l == 1)
            {
               cout << l; 
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (m = rows - 1; m >= 1; m--)
    {
        for (n = 1; n <= rows-m; n++)
        {
            cout << " ";
        }
        for (o = 1; o <= m; o++)
        {
            if (o == 1)
            {
                cout << o;
            }
            else {
                cout << " ";
            }
        }
        for (p = m - 1; p >= 1; p--)
        {
            if (p == 1)
            {
                cout << p;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
