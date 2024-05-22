#include <iostream>
using namespace std;

//reverse() : 전달 받은 배열의 양 끝 데이터를 순차적(첫 번째와 마지막, 두 번째와 마지막에서 두번째...)으로 swap()의 매개변수로 전달
//swap() :매개변수로 전달된 두 데이터를 교환
template <typename T>
void print(string title, T arr[], int size)
{
    cout << title << " : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
void reverse(T *arr, int size){
    for(int i=0; i<size/2; i++) {
        swap(arr[i], arr[size-1-i]);
    }
}

template <typename T>
void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr1[] = {3, 7, 2, 12, 14, 1};
    double arr2[] = {22.7, 14.2, 3.8, 12.23, 11.2};
    char arr3[] = {'C', 'a', 'B', 'E', 'N', 'Q'};
    string arr4[] = {"John", "Lu", "Mary", "Su"};
    print("Original array", arr1, sizeof(arr1) / sizeof(int));
    reverse(arr1, sizeof(arr1) / sizeof(int));
    print("Reversed array", arr1, sizeof(arr1) / sizeof(int));
    cout << endl;
    
    print("Original array", arr2, sizeof(arr2) / sizeof(double));
    reverse(arr2, sizeof(arr2) / sizeof(double));
    print("Reversed array", arr2, sizeof(arr2) / sizeof(double));
    cout << endl;

    print("Original array", arr3, sizeof(arr3) / sizeof(char));
    reverse(arr3, sizeof(arr3) / sizeof(char));
    print("Reversed array", arr3, sizeof(arr3) / sizeof(char));
    cout << endl;

    print("Original array", arr4, sizeof(arr4) / sizeof(string));
    reverse(arr4, sizeof(arr4) / sizeof(string));
    print("Reversed array", arr4, sizeof(arr4) / sizeof(string));
    cout << endl;

    return 0;
}