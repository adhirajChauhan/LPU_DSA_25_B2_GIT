#include<iostream>
using namespace std;
class myQueue{
    public:
    int arr[1000];
    int front, rear;

    myQueue(){
        front = 0;
        rear = -1;
    }

    void enqueue(int x){
        if(rear == 999){
            cout << "Queue Overflow\n";
            return;
        }
        // rear++;
        arr[++rear] = x;
    }
    void dequeue(){
        if(front > rear){
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }
};
int main()
{
 
}