#include<iostream>
using namespace std;

void add(){
cout << "1";
} 
void add(int a)
{
cout << "2";
}

// int add(int a, int b){
//     return a + b;
// }

// int add(int a, float b){
//     return a + b;
// }

int main()
{
 add(3);
}