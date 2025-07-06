#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
 
int main()
{

    map<int,string> m1;

    m1[100] = "Student1";
    m1[324] = "Student2";
    m1[4] = "Student 3";

    // cout << m1[100] << endl;
    for(auto i : m1){
        cout << "Key -> " << i.first << " Value -> " << i.second << endl;
    }
}