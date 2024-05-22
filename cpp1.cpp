#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int func(string& s)
{
    stack<char> st; 
    queue<char> q;
    for (int i = 0; i < s.length(); i++) { 
        st.push(s[i]);
        q.push(s[i]);
    }
    for (int i = 0; i < s.length(); i++) {
        if (st.top() != q.front()) return 0;
        st.pop(); 
        q.pop(); 
        }
        return 1;
}

int main(){
    string str;
    cin >> str;
    if (func(str)) cout << "YES" << endl; 
    else cout << "NO" << endl;
    return 0;
}

/*

*/