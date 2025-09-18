#include <iostream>

using namespace std;
int solution(int n)
{
    string str = to_string(n);
    int answer = 0;
    
    for(int i = 0; i < str.length(); i++)
    {
        answer += str[i] - '0';
    }
    return answer;
}