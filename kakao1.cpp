#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {

    auto compare = [](const std::pair<double, int>& a, const std::pair<double, int>& b) {
        if (a.first != b.first)
            return a.first < b.first; // 첫 번째 항목을 오름차순으로 정렬
        else
            return a.second > b.second; // 첫 번째 항목이 동일한 경우 두 번째 항목을 내림차순으로 정렬
    };

    vector<int> num(N+1, 0);
    vector<double> fail(N+1, 0.0);
    priority_queue<pair<double, int>, vector<pair<double, int>>, decltype(compare)> pq(compare);
    
    for(int i=0; i<stages.size(); i++){
        num[stages[i]-1]++;
    }
    int fullN = stages.size();
    for(int i=0; i<fail.size(); i++){
        fail[i] = (double)num[i]/fullN;
        cout<<fail[i]<<endl;
        fullN -= num[i];
    }
    for(int i=1; i<fail.size(); i++){
        pq.push(make_pair(fail[i-1], i));
    }
    vector<int> result;
    while(!pq.empty()){
        pair<double, int> number = pq.top();
        result.push_back(number.second);
        cout<<number.first<<" "<<number.second<<endl;
        pq.pop();
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    string s;
    cin>>s;
    for (char digit_char : s) {
        int digit = digit_char - '0'; // 문자를 숫자로 변환
        arr.push_back(digit); // 숫자를 벡터에 추가
    }
    vector<int> res = solution(n, arr);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}