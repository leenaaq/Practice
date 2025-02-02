#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> cnt;

    for (const string name : participant) {
        cnt[name]++;
    }

    for (const string name : completion) {
        cnt[name]--;
    }
    
    for (auto entry : cnt) {
        if (entry.second > 0) {
            answer = entry.first;
            break;
        }
    }
    return answer;
}