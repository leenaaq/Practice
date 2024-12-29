#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') answer += " ";
        else {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] += n - 26;
                if(s[i] < 'a') s[i] += 26;  
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += n - 26;
                if(s[i] < 'A') s[i] += 26;  
            }
            answer += s[i];
        }
    }
    return answer;
}