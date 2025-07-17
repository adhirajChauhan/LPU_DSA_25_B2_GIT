#include<iostream>
using namespace std;

/*
    Inheritance
        in this a class(called the child or derieved) acquires properties and behaviours from another class(called parent or base class);
*/
class Animal{
    public:
    void eat(){
        cout << "Eating " << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking " << endl;
    }


};
 
int main()
{
    Dog dog1;
    dog1.eat();

    Animal a1;
    // a1.
}