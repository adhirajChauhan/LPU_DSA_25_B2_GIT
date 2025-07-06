#include<iostream>
using namespace std;
 
bool linearSearch(int arr[], int size, int k){
    if(size == 0) return false;

    if(arr[0] == k) return true;
    else{
        return linearSearch(arr+ 1, size - 1, k);
    }
}

bool binarySearch(int arr[], int k, int s, int e){
    if(s> e) return false;

    int mid = (s+e)/2;
    if(arr[mid] == k) return true;

    if(arr[mid] < k){
        return binarySearch(arr, k, mid+1, e);
    }
    else{
        return binarySearch(arr, k, s, mid-1);
        
    }
}

int main()
{
 
}