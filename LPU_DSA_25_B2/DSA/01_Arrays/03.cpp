#include<iostream>
using namespace std;

bool linearSearch(int arr[], int key, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == key) return true;
    }
    return false;
}
 
int main()
{
    int arr[] = {3,6,1,9,4};

    if(linearSearch(arr, 11, 5)) cout << "Element found " << endl;
    else cout << "Element not found" << endl;
}