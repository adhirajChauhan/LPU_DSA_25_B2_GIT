// A constructor is a special member function which is called automatically when an object is created.
//
#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;

    Student(int id, string name){
        this->id = id;
        this->name = name;
    
    }

};

int main()
{
    Student s1(5, "Person 1");

    cout << s1.id << endl;
}