#include<iostream>
using namespace std;
 
int main()
{
    // int age = 10;

    // if(age >= 18){
    //     cout << "Above 18" << endl;
    // }
    // else{
    //     cout << "Not 18"<< endl;
    // }

    // int num = 10;

    // if(num > 5){
    //     cout << "1" << endl;
    // }
    // if(num > 3){
    //     cout << "2" << endl;
    // }


    int a = 5, b = 5;

    if((a++ == 5) && (++b == 6) || (a == 7)){
        cout << "1" << endl;
    }
    else{
        cout << "2" << endl;
    }

    cout << "a = " << a << " b = " << b << endl;

}