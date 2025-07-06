#include<iostream>
using namespace std;
 
int main()
{
    // int a = 5;
    // int b = 6;

    // cout << &a << endl;
    // cout << &b << endl;


    int a = 5;
    int *ptr = &a; 

    cout << &a << endl; //address of a
    cout << ptr << endl; //address of a

    cout << *ptr << endl; //value of a
    cout << &ptr << endl; //address of ptr

    
}