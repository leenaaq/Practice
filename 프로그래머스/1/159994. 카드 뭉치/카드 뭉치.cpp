#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    vector<string> card;
    bool result = 1;
    int j = 0, k = 0; 
    for(int i = 0; i < goal.size(); i++){
        if(cards1[j] == goal[i]) j++;
        else if(cards2[k] == goal[i]) k++;
        else {result = 0;
              break;
             }
    }
    if(result == 1) answer = "Yes";
    else if (result == 0) answer = "No";
    return answer;
}