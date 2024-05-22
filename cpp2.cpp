#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

int check_matching(const char* in);

int main() {
    
    char eq[30];
    scanf("%s", &eq);

    if(check_matching(eq) == 1)
        printf("success!\n");
    else printf("fail!\n");
    return 0;
}

int check_matching(const char* in){
    stack<char> st;
    for(int i=0; i<strlen(in); i++){
        if(in[i]=='(' || in[i]=='['|| in[i]=='{'){
            st.push(in[i]);
        }
    }
    for(int j=0; j<strlen(in); j++){
        if(in[j]==')' && st.top()=='(') st.pop();
        else if(in[j]=='}' && st.top()=='{') st.pop();
        else if(in[j]==']' && st.top()=='[') st.pop();
    }
    return st.empty() ? 1:0;
}