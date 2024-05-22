#include <iostream>
#include <vector>
using namespace std;

struct node{
    int first;
    int second;
    node(int a, int b):first(a), second(b){}
};

void swap(vector<node> &a, vector<node> &b){
    vector<node> temp = a;
    a = b;
    b = temp;
}

int partition(vector<node> &arr, int low, int high){
    int mid = (low+high)/2;
    int pivot = arr[mid].first;
    int i = (low-1);

    for(int j=low; j<high; j++){
        if(arr[j].first<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[mid]);
    return (i+1);
}

void quicksort(vector<node> &arr, int low, int high){
    if(low<high){
        int partitionIndex = partition(arr, low, high);

        quicksort(arr, low, partitionIndex-1);
        quicksort(arr, partitionIndex+1, high);
    }
}

int main(){
    vector<node> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(node(temp, i));
    }

    quicksort(arr, 0, arr.size()-1);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i].second<<" "<<arr[i].first<<"\n";
    }
    return 0;
}