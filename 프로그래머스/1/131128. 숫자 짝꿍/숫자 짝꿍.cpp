#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> Change(string s) {
    vector<int> num(10, 0);
    
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < 10; j++){
            if(s[i] - '0' == j) {
                num[j]++;    
                break;
            }
        }
    }
    return num;
}

vector<int> Cal(vector<int> x, vector<int> y){
    vector<int> result;
    for(int i = 0; i < 10; i++){
        if(x[i] > y[i]) swap(x[i], y[i]);
        for(int j = 0; j < x[i]; j++) result.push_back(i);
    }
    sort(result.begin(), result.end(), greater<int>());
    return result;
}

string solution(string X, string Y) {
    string answer = "";
    vector<int> x, y;
    vector<int> a;
    x = Change(X); y = Change(Y);
    
    a = Cal(x, y);
    for(int i = 0; i < a.size(); i++){
        //cout << a[i] << " ";
        answer += a[i] + '0';
    }
    
    if(answer.empty()) answer = "-1";
    else if(answer[0] == '0') answer = "0";
    return answer;
} 
