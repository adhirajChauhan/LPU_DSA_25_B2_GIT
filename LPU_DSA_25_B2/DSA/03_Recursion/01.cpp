#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0) return 1;

    return n * factorial(n - 1);
}

void print(int n){
    if(n == 0) return;

    cout << n << " ";
    print(n-1);
}
int main()
{
    // int ans = factorial(5);
    // cout << ans << endl;
    print(5);


    string str = "Hello";
    
}