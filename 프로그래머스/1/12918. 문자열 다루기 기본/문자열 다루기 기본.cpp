#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size() == 4 || s.size() == 6) {
        for(int i = 0; i < s.size(); i++)
            if(s[i] < '0' || s[i] > '9') answer = 0;
        
    } else answer = 0;
    return answer;
}