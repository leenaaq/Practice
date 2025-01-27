#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt = 0, yCnt = 0;
    for(char c : s){
        if(c == 'p' || c == 'P') pCnt++;
        else if (c == 'y' || c == 'Y') yCnt++;
    }
    if(pCnt == 0 && yCnt == 0) answer = true;
    else if(pCnt == yCnt) answer = true;
    else answer = false;
    return answer;
}