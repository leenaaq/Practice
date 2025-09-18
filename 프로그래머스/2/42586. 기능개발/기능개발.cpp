#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> day = progresses;
    for(int i = 0; i < progresses.size(); i++)
    {
        day[i] = (100 - progresses[i]) / speeds[i];
        int amount = (100 - progresses[i]) % speeds[i];
        if (amount > 0)
        {
            day[i]++;
        }
    }
    
    
    int max = day[0];
    int cnt = 1;
    for(int i = 1; i < day.size(); i++)
    {
        if(max >= day[i])
        {
            cnt++;
        }
        else
        {
            answer.push_back(cnt);
            max = day[i];
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    return answer;
}