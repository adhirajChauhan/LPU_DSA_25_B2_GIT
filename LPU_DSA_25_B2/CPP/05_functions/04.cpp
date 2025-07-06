#include<iostream>
using namespace std;

void test(int &x){
    x++;
    cout << "Value in test function  " << x << endl;
}

int main()
{
    int a = 10;
    test(a);
    cout << "Valu of a in main : " << a << endl;
}