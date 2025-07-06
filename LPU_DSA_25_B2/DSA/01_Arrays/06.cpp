#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            // goto right
            start = mid + 1;
        }
        else{
            //goto left
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
 
int main()
{
    int arr[] = {3,5,6,7,9,10,11,15};

    cout << "Index of 6 is : " <<  binarySearch(arr, 8, 6) << endl;
}