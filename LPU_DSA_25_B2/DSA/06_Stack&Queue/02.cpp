#include<iostream>
using namespace std;

class myStack{
    public:
    int arr[1000];
    int top;

    myStack(){
        top = -1;
    }

    void push(int x){
        if(top == 999){
            cout << "Stack Overflow\n";
            return;
        }
        // top++;
        arr[++top] = x;
    }

    void pop(){

        if(top == -1){
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    bool isEmpty(){
        return top == -1;
    }

};

int main()
{
 
}