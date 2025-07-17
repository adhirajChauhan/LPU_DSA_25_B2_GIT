#include<iostream>
using namespace std;

class Base{
    public:
    virtual void print(){
        cout << "From Base" << endl;
    }
};

class Child: public Base{
    public:
    void print() override{
        cout << "From Child" << endl;
    }
};
 
int main()
{
    Child c1;
    Base* b1 = &c1;
    b1->print();
}