#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

string Binary(int n) {
    vector<int> temp;
    while(n > 1){
        temp.push_back(n % 2);
        n /= 2;
    }
    if(n == 1) temp.push_back(n);
    
    string temp2;
    while(!temp.empty()){
        temp2 += to_string(temp.back());  
        temp.pop_back();
    }
    //cout << "\n" << temp2 << "\n";
    return temp2; 
}

int Count(string s, int *zeroCnt){
    int oneCnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') (*zeroCnt)++;
        else if(s[i] == '1') oneCnt++;
    }
    return oneCnt;
}

vector<int> solution(string s) {
    vector<int> answer;
    int cnt = 0, len, zeroCnt = 0;
    while(len != 1){
        len = Count(s, &zeroCnt);
        s = Binary(len);
        cnt++;
    }
    answer.push_back(cnt);
    answer.push_back(zeroCnt);
    return answer;
}
