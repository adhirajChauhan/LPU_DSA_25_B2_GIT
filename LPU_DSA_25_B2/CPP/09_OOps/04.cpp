#include<iostream>
using namespace std;

//--------------------------------
    //MultiLevel
    // class A{
    //     public:
    //     int a;
    // };

    // class B : public A{

    // };

    // class C : public B{

    // };


//--------------------------------
//Multiple

// class A{
//     public:
//     void print(){
//         cout << "From A "<<  endl;
//     }
// };

// class B{
//     public:
//     void print(){
//         cout << "From B "<<  endl;
//     }
// };

// class C : public A, public B{

// };


//--------------------------------

class A{
    public:
    void print(){
        cout << "From A "<<  endl;
    }
};

class B : public A{
    public:
    void print(){
        cout << "From B "<<  endl;
    }
};

class C : public A{
    public:
    void print(){
        cout << "From C "<<  endl;
    }
};


 
int main()
{
    C c1;
    c1.A::print();
}