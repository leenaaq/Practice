#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;
    
    for (int i = 0; i < name.size(); i++) {
        m[name[i]] = yearning[i];
    }
    
    for(int i = 0; i < photo.size(); i++) {
        int score = 0;
        for(int j = 0; j < photo[i].size(); j++){
            if(m.find(photo[i][j]) != m.end()) {
                score += m[photo[i][j]];
            }
        }
        answer.push_back(score);
    }
    return answer;
}