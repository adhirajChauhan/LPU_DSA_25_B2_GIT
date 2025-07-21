#include<iostream>
#include<vector>
using namespace std;

//vectors and pairs


 
int main()
{
    // vector<int> v = {1,2,3};
    // v.push_back(4);

    // for( auto i : v) cout << i << " ";

    //pair
    // pair<int, string> p = {1, "First"};
    // cout << "ID : " << p.first << " :: Name : " << p.second << endl; 


    //vector of pair
    vector<pair<int, int>> vp = {{1,2}, {3,4}};

    for(auto i : vp){
        cout << i.first << ", " << i.second << endl;
    }

}