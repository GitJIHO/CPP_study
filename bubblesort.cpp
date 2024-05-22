#include <iostream>
using namespace std;

void bubblesort(int* arr, int size){
    for(int i=size-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int *arr;
    int n;
    cin>>n;
    arr = new int[n];
    int size = n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}