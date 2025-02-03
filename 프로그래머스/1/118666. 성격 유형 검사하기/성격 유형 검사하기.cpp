#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    char n[8] = {'R', 'T', 'C', 'F', 'J', 'M', 'A', 'N'};
    map<char, int> m;
    for(int i = 0; i < sizeof(n) / sizeof(n[0]); i++) {
        m[n[i]] = 0;
    }
    
    for(int i = 0; i < survey.size(); i++) {
        if(choices[i] == 4) continue;
        if(choices[i] == 1) m[survey[i][0]] += 3;
        else if(choices[i] == 2) m[survey[i][0]] += 2;
        else if(choices[i] == 3) m[survey[i][0]] += 1;
        else if(choices[i] == 5) m[survey[i][1]] += 1;
        else if(choices[i] == 6) m[survey[i][1]] += 2;
        else if(choices[i] == 7) m[survey[i][1]] += 3;
    }
    
    for(int i = 0; i < 8; i += 2){
        if(m[n[i]] >= m[n[i + 1]]) answer += n[i];
        else answer += n[i + 1];
    }
    return answer;
}