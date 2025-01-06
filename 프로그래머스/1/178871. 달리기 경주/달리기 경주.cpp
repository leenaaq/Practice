#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> playerM;
    for(int i = 0; i < players.size(); i++) playerM.insert({players[i], i});
    
    for(const string& calling : callings){
        int rank = playerM[calling];
        swap(players[rank - 1], players[rank]);
        playerM[players[rank]] = rank;
        playerM[players[rank - 1]] = rank - 1;
    }
    
    for(int i = 0; i < players.size(); i++) answer.push_back(players[i]);
    return answer;
}