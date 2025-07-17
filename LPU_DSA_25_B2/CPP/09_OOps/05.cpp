#include<iostream>
using namespace std;

/* 
    Polymorhism
    The term "Polymorphism" is combination of "poly" + "morph" which means many forms;
    e.g - single person is behaving differently according to the situation

    Types -
    1. Compile time polymorphism -> Function overloading, operator overloading
    [the overloaded functions are invoked by matching the type and number of arguments
    this information is available at compile time and therefore the compiler selects the appropriate function at compile time
    it is also known as static binding or early binding ]

    
*/

int add(int a, int b){
    return a + b;
}

int add(int a, int b , int c ){
    return a+ b + c;
}
 
int main()
{
    add(2,3);
}