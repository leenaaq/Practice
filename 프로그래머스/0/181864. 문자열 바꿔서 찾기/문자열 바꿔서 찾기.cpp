#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    map <char, char>m {{'A', 'B'}, {'B', 'A'}};
    int answer;
    
    for(int i = 0; i < myString.length(); i++)
    {
        answer = 0;
        for(int j = 0; j < pat.length(); j++)
        {
            if(m[myString[i + j]] == pat[j])
            {
                answer++;
            }
            else
            {
                break;
            }
        }
        if(answer == pat.length()) return answer = 1;       
    }
    return answer = 0;
}