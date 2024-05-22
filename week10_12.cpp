#include <iostream>
using namespace std;

class ArrayUtil
{
public:
    // s1과 s2를 연결한 새로운 배열을 동적 생성하여 리턴
    static int *concat(int s1[], int size1, int s2[], int size2, int &retSize);
    // s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
    static int *remove(int s1[], int size1, int s2[], int size2, int &retSize);
};
int *ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int &retSize){
    retSize = size1+size2;
    int *tmp = new int[retSize];
    for (int i=0; i<size1; i++){
        *(tmp+i) = *(s1+i);
    }
    for (int i=0; i<=size2; i++){
        tmp[size1+i] = s2[i];
    }
    return tmp;
}
int *ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int &retSize){
    retSize = size1;
    int *p = new int[retSize];
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(s1[i] == s2[j]){
                s1[i]=-1;
            }
        }
        if(s1[i]==-1) {
            retSize--;
            p[i] = -1;
        } else {
                p[i]=s1[i];
            }
    }
    int *q = new int[retSize];
    int index = 0;
    for (int i=0; i<size1; i++){
        if(p[i]!=-1){
            q[index] = p[i];
            index++;
        }
    }
    delete[] p;
    return q;
}
int main()
{
    cout<<"20205233 이지호"<<endl;
    int xcount = 0, ycount = 0;
    int *x, *y;
    while(xcount<1 || xcount>5){
        cout<<"x배열의 원소(1~5)는 몇 개 ?: "; cin>>xcount;//x배열의 원소의 개수(1~5)를 입력 받는다. 
    }
    x = new int[xcount];
    cout<<"x배열에 저장할 정수 입력 : ";
    for(int i=0; i<xcount; i++){
        cin>>x[i];
    }
    cout<<endl;
    while(ycount<1 || ycount>5){
        cout<<"y배열의 원소(1~5)는 몇 개 ?: "; cin>>ycount;//x배열의 원소의 개수(1~5)를 입력 받는다. 
    }
    y = new int[xcount];
    cout<<"y배열에 저장할 정수 입력 : ";
    for(int i=0; i<ycount; i++){
        cin>>y[i];
    }
    int retsize = 0;
    int *conarr = ArrayUtil::concat(x, xcount, y, ycount, retsize);
    cout << "\nx배열과 y배열을 연결한 배열은 ";
    for (int i = 0; i < retsize; i++)
        cout << conarr[i] << ' ';
    cout << endl;
    int *remarr = ArrayUtil::remove(x, xcount, y, ycount, retsize);
    cout << "\nx배열에서 y배열의 원소를 삭제한 결과, x배열의 개수는 " << retsize << "개, ";
    for (int i = 0; i < retsize; i++)
        cout << remarr[i] << ' ';
    cout << endl;
    delete[] x;
    delete[] y;
    delete[] conarr;
    delete[] remarr;
}