#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size  = size +1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else return;
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        } cout << endl;
    }

    void deleteInHeap(){
        if(size == 0){
            cout << "Nothing to delete" << endl;
        }
        //replace first with last
        arr[1] = arr[size];

        size--;

        //take root at its correct position
        int i = 1;
        while(i < size){
            int leftIdx = 2 * i;
            int rightIdx = 2 * i + 1;

            if(leftIdx < size && arr[i] < arr[leftIdx]){
                swap(arr[i], arr[leftIdx]);
            }
            else if(rightIdx < size && arr[i] < arr[rightIdx]){
                swap(arr[i], arr[rightIdx]);
            }
            else{
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n){
        int size = n;
        while (n > 1){
            swap(arr[size], arr[1]);
            size--;

            heapify(arr, size, 1);
        }
    }
};
 
int main()
{
    heap h;
    // h.insert(10);
    // h.insert(8);
    // h.insert(7);
    // h.insert(5);
    // h.insert(4);
    // h.insert(9);
    // h.insert(12);

    // h.print();

    int arr[] = {-1, 34, 33, 35, 32, 30};
    int n = 5;
    for(int i = n/2; i>0;i--){
        h.heapify(arr, n, i);
    }
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    } cout << endl;

}