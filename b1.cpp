#include <iostream>
using namespace std;

int main() {
    int N;
    int res = 0;
    cin>>N;
    string *s;
    s = new string[N];
    if (N<=100 || N>=0){
        for (int i=0; i<N; i++){
            cin>>*(s+i);
        }
        for (int j=0; j<N; j++){
            string p = s[j];
            bool a = true;
            for(int k = 0; k<p.length(); k++){
                char c = p[k];
                for(int q = k+1; q<p.length(); q++){
                    if(p[q] == c && p[q-1]!=c){
                        a = false;
                        break;
                    }
                }
            }
            if(a){
                res+=1;
            }
        }
        cout<<res;
    }
}