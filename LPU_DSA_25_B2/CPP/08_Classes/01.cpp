#include<iostream>
using namespace std;

// class className{

// };
class Student{
    public:
    int age;
    string name;
    int id;

    // void getName(){
    //     cout << "Name is : " << name << endl;
    // }
    string getName(){
        return name;
    }
};

int main()
{
    Student s1;
    s1.name = "Student1";
    s1.age = 20;

    cout << s1.getName();
}

//Create a class Box
//Define data members - length, width, height
// Define member function - calculateArea, calculateVolume
//Create objects box1 and box2
//Calculate and print area and volume for both the boxes