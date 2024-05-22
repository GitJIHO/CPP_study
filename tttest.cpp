#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    queue<pair<int, int>> q;
    
    q.push(make_pair(n, 0));
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        if(a==k){
            cout<<b;
            break;
        }
        if(a-1>=0 && a-1<1000000){
            q.push(make_pair(a-1,b+1));
        }
        if(a+1>=0 && a+1<1000000){
            q.push(make_pair(a+1,b+1));
        }
        if(a*2>=0 && a*2<1000000){
            q.push(make_pair(a*2,b+1));
        }
    }
    
}