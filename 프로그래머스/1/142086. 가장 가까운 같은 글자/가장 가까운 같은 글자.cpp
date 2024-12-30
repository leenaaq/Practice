#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    for(int i = 0; i < s.size(); i++){
        int cnt = 0;
        for(int j = i - 1; j >= 0; j--){
            if(s[i] == s[j]) {
                cnt = i - j;
                break;
            }
        }
        if(cnt == 0) answer.push_back(-1);
        else answer.push_back(cnt);
    }
    return answer;
}
