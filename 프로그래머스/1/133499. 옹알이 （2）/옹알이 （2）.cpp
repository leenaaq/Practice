#include <string>
#include <vector>

using namespace std;

bool canPronounce(string str) {
    string talk[4] = {"aya", "ye", "woo", "ma"};
    string lastWord = "";
    int i = 0;

    while (i < str.length()) {
        bool found = false;

        for (int j = 0; j < 4; j++) {
            string word = talk[j];
            if (str.substr(i, word.length()) == word && lastWord != word) {
                i += word.length(); 
                lastWord = word;
                found = true;
                break;
            }
        }

        if (!found) {
            return false;
        }
    }

    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;
    for (string word : babbling) {
        if (canPronounce(word)) {
            answer++;
        }
    }
    return answer;
}
