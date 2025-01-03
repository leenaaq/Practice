#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0, idx = 0;

    while (idx < s.size()) {
        int sameCount = 1;
        int diffCount = 0;
        char c = s[idx++]; 

        while (idx < s.size()) {
            if (s[idx] == c) sameCount++;
            else diffCount++; 
            idx++;
            if (sameCount == diffCount) break;
        }
        answer++;
    }

    return answer;
}

