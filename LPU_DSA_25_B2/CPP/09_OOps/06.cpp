
#include<iostream>
using namespace std;
 /*
2. Runtime polymorphism -> Function overriding, virtual functions
    This type of polymorphism is achieved by function overriding
    it is also called late binding / dynamic polymorphism
    the function call is resolved at runtime
 */

class Base{
    public:
    void print(){
        cout << "From Base" << endl;
    }
};
class Child : public Base{
    public:
    void print(){
        cout << "From Child" << endl;
    }
};
int main()
{
    Child c1;
    c1.Base::print();
}