#include<iostream>
using namespace std;
 
int main()
{
    int num1, num2;
    char oper;
    cout << "Enter an operator (+, -, *,/) " << endl;
    cin >> oper;
    cout << "Enter two numbers : " ;
    cin >> num1 >> num2;

    switch(oper){
        case '+' :
        cout << num1 + num2;
        // break;

        case '-':
        cout << num1 - num2;
        break;

        case '*':
        cout << num1 * num2;
        break;

        default :
        cout << "Not valid";
    }


}