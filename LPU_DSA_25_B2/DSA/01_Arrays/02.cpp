#include<iostream>
using namespace std;

//Find the maximum element in array

// int maxElement(int arr[], int size){
//     int max = INT_MIN;
//     for(int i = 0; i< size; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

//Count Even and Odd //1523
// void countEvenOdd(int arr[], int size){
//     int evenCount = 0;
//     int oddCount = 0;

//     for(int i =0; i<size;i++){
//         if(arr[i]%2 == 0) evenCount++;
//         else oddCount++;
//     }
//     cout << "Even : " << evenCount << " odd " << oddCount << endl;
// }

//print the reverse of an an array
void reverseArray(int arr[], int size){
    for(int i = size - 1; i >=0; i--){
        cout << arr[i] << " ";
    }
}

//Check if array is palindrome //125 //hw

//Find the second largest element
// int secondLargest(int arr[], int size){
//     int firstMax = INT_MIN, secondMax = INT_MIN;

//     for(int i = 0; i < size; i++){
//         if(arr[i] > firstMax){
//             secondMax = firstMax;
//             firstMax = arr[i];
//         }
//         else if(arr[i] > secondMax && arr[i] != firstMax){
//             secondMax = arr[i];
//         }
//     }
//     return secondMax;
// }

//Find the first repeating element

//Check if array is sorted
bool isSorted(int arr[], int size){
    for(int i = 1; i < size; i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

//{1,0,0,1,1,1,0} Count the number of zero and one
// {4,7,8,3,1,10,17}, k = 9 -> count the number of elements greater than k

int main()
{
    int arr[7] = {5,3,8,8,6,1,1};
    // cout << maxElement(arr, 5);
    // countEvenOdd(arr,5);
}