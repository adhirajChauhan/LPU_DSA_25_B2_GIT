#include<iostream>
using namespace std;
 
// void func2(){
//     cout << "2" << endl;
// }
// void func1(){
//     func2();
//     cout << "1" << endl;
// }


void student(string name, int age){
    cout << "The name is : " << name << " ";
    cout << "The age is : " << age << " ";
}

int main()
{
    student("John", 21);
}