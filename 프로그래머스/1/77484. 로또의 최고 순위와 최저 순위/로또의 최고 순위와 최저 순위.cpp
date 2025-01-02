#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int Rank(int num){
    if(num == 6) return 1; 
    else if(num == 5) return 2; 
    else if(num == 4) return 3; 
    else if(num == 3) return 4; 
    else if(num == 2) return 5;
    else return 6;
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int sameNum = 0, zero = 0;
    for(int i = 0; i < lottos.size(); i++){
        if(lottos[i] == 0) zero++;
        if(find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) sameNum++;
    }
    answer.push_back(Rank((zero + sameNum)));
    answer.push_back(Rank(sameNum));
    return answer;
}
