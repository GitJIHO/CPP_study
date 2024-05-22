#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"array size? ";
    cin>>size;

    cout<<"== vector array =="<<endl;
    vector<double> varr(size);
    for(int i=0; i<size; i++){
        cout<<"value? ";
        cin>>varr[i];
    } for(int i=0; i<size; i++){
        cout<<"varr["<<i<<"]="<<varr[i]<<endl;
    }

    cout<<"== new array =="<<endl;
    double *narr = new double[size];
    for(int i=0; i<size; i++){
        cout<<"value? ";
        cin>>narr[i];
    }
     for(int i=0; i<size; i++){
        cout<<"narr["<<i<<"]="<<narr[i]<<endl;
    }
    delete[] narr;
}
