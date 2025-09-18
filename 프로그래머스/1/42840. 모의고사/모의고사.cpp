#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int student1[5] = {1, 2, 3, 4, 5};
    int student2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int student3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int score[3] = {0, };
    
    for(int i = 0; i < answers.size() + 10; i++)
    {
        if(student1[i % 5] == answers[i])
        {
            score[0]++;
        }
        
        if(student2[i % 8] == answers[i])
        {
            score[1]++;
        }
        
        if(student3[i % 10] == answers[i])
        {
            score[2]++;
        }
    }
    
    for(int i = 0; i < 3; i++)
    {
        if(score[i] == *max_element(score, score + 3))
        {
            answer.push_back(i + 1);
        }
    }
    return answer;
}

