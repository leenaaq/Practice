#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<char> temp;
    for(int i = 0; i < skip.length(); i++) temp.push_back(skip[i]);
    
    for(int i = 0; i < s.length(); i++){
        int idx = index;
        
        char current = s[i];

        while (idx > 0) {
            current++; 
            if (current > 'z') current = 'a';  
            if (find(temp.begin(), temp.end(), current) == temp.end()) {
                idx--; 
            }
        }
        answer += current; 
    }
    return answer;
}
