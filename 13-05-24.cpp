#include <iostream>
#include <string>
#include<vector>
using namespace std;


struct stud {
    string SNo;
    string name;
    int theory; 
    int lab;
};

struct stud2 {
    string SNo;
    string name;
    int marks[4];
};
int main() {
    {
    // vector<int> v1;
    // for(int i = 0; i < 5; i++)
    // {
    //     cin >> v1[i];
    // }
    // cout << "output ================" << endl;
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << v1[i] << " ";
    // }
    
    // vector<int> v1{1,2, 3, 4, 5};
    // for(int x: v1)
    // {
    //     cout << x << endl;
    // }
    
    
    // vector<int> v1= {1,2, 3, 4, 5};
    // for(int x: v1)
    // {
    //     cout << x << endl;
    // }
    
    // cout << "size => " << v1.size();
    
    
    
    // vector<int> v1(4, 10); // {10, 10, 10, 10}
    // cout << "before updatation-------------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << endl;
    // }
    // cout << "updating------------------------" << endl;
    // for(int &x: v1)
    // {
    //     x++;
    //     cout << x << endl;
    // }
    // cout << "after updatation-----------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << endl;
    // }
    
    
    
    // vector<int> v1(4, 10); // {10, 10, 10, 10}
    // cout << "before updatation-------------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    // v1.push_back(24);
    
    // cout << "\nafter updatation-----------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    
    // vector<int> v1(4, 10); // {10, 10, 10, 10}
    // cout << "before updatation-------------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    // v1.pop_back();
    
    // cout << "\nafter updatation-----------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    
    // using iterator
    // vector<int> v1(4, 10); // {10, 10, 10, 10}
    // // declare iterator
    // vector<int>::iterator iter;
     
    // cout << "before updatation-------------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    // v1.insert(v1.begin() + 1, 33);
    // cout << "\noutput using iterator-----------------" << endl;
    // v1.inser(v1.begin() + 2, 34);
    // use iterator with for loop
    // for (iter = v1.begin(); iter < v1.end(); iter++) {
    //     cout << *iter << " ";
    // }
    
    // cout << "\nafter updatation-----------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    
    
    // cout << "\nafter updatation-----------------" << endl;
    // for(int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1[i] << " ";
    //     cout << v1.at(i) << " ";
    // }
    // }
    
    
    
    
    // vector<int> v1(4, 10); // {10, 10, 10, 10}
    // // declare iterator
    // vector<int>::iterator iter;
     
    // cout << "before updatation-------------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    // v1.insert(v1.begin() + 1, 33);
    
    // cout << "\nafter updatation-----------------" << endl;
    // for(auto i = 0; i < v1.size(); i++)
    // {
    //      cout << v1[i] << " ";
    // }
    
    
    // in reverse order
    // vector<int> v1{1, 3, 4, 6, 7, 2}; // {10, 10, 10, 10}
    // // declare iterator
    // vector<int>::iterator iter;
     
    // cout << "before updatation-------------------" << endl;
    // for(int x: v1)
    // {
    //     cout << x << " ";
    // }
    
    // v1.insert(v1.begin() + 1, 33);
    
    // cout << "\nafter updatation-----------------" << endl;
    // for (iter = v1.end(); iter < v1.begin(); iter++) {
    //     cout << *iter << " ";
    // }
    }
    
    // stud s1;
    // cin >> s1.SNo;
    // cin >> s1.name;
    // cin >> s1.theory;
    // cin >> s1.lab;
    
    // cout << "\nOutput ------------------------" << endl;
    
    // cout << s1.SNo << endl;
    // cout << s1.name << endl;
    // cout << s1.theory << endl;
    // cout << s1.lab << endl; 
    
    
    // stud s_arr[4];
    // for(int i = 0; i < 4; i++)
    // {
    //     cout << endl;
    //     cin >> s_arr[i].SNo;
    //     cin >> s_arr[i].name;
    //     cin >> s_arr[i].theory;
    //     cin >> s_arr[i].lab;
    // }
    
    
    // cout << "\nOutput ------------------------" << endl;
    
    // for(int i = 0; i < 4; i++)
    // {
    //     cout << endl;
    //     cout << s_arr[i].SNo << endl;
    //     cout << s_arr[i].name << endl;
    //     cout << s_arr[i].theory << endl;
    //     cout << s_arr[i].lab << endl; 
    // }
    
    
    
    // stud2 s2;
    // cout << "Serial No: ";
    // cin >> s2.SNo;
    // cout << "Name: ";
    // cin >> s2.name;
    // cout << "Marks: ";
    // for(int i = 0; i < 4; i++)
    // {
    //     cin >> s2.marks[i];
    // }
    
    // cout << "\nOutput ------------------------" << endl;
    
    // cout << "Serial No: " << s2.SNo << endl;
    // cout << "Name:" << s2.name << endl;
    // cout << "marks: ";
    // for(int i = 0; i < 4; i++)
    // {
    //     cout << s2.marks[i] << " ";
    // }
    
    
    
    
}
