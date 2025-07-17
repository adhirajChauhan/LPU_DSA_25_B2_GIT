#include<iostream>
using namespace std;

/*
    Encapsulation -
    1. It is a process of wrapping similar code in one place
    2. We cannot access any function from class directly
    3. Increase in security of data
    4. it helps control the modification of out data members
    5. it involves direct access to some of an object's components, which is achieved by access modifiers(private, public and protected)
*/

// class Rectangle{
//     private:
//     int length;
//     int breadth;

//     public:
//     Rectangle(int l, int b){
//         length = l;
//         breadth = b;
//     }
//     int getLength(){
//         return length;
//     }
//     void setLength(int val){
//         length = val;
//     }
// };

class BankBalance{
    private:
    int balance;

    public:
    int getBalance(){
        return balance;
    }

    void setBalance(int amount){
        if(amount > 0) balance += amount;
    }
};

int main()
{
    // Rectangle r1(5,10);
    // cout << "Before : " << r1.getLength() << endl;
    // r1.setLength(20);
    // cout << "After : " << r1.getLength() << endl;
}