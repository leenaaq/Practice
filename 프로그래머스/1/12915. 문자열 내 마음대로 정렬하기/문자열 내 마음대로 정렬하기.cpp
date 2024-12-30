#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    for(int i = 0; i < strings.size() - 1; i++){
        for(int j = 0; j < strings.size() - i - 1; j++){
            if(strings[j][n] > strings[j + 1][n]) swap(strings[j], strings[j + 1]);
             else if (strings[j][n] == strings[j + 1][n] && strings[j] > strings[j + 1]) {
                swap(strings[j], strings[j + 1]);
            }
        }
    }
    for(int i = 0; i < strings.size(); i++) answer.push_back(strings[i]);
    return answer;
}
