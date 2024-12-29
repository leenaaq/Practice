#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i <= t.size() - p.size(); i++){
        string a = "";
        for(int j = i; j < i + p.size(); j++){
            a += t[j];
        }
        if(stoll(a) <= stoll(p)) answer++;
    }
    return answer;
}