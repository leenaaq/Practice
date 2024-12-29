#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0, a = 0;
    while(idx != s.size()){
        if(s[idx] == ' ') a = -1;
        if(a % 2 == 0) answer += toupper(s[idx]);
        else answer += tolower(s[idx]);
        a++;
        idx++;
    }
    return answer;
}