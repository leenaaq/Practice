#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    answer += n / 100000000;
    n %= 100000000;
    
    answer += n / 10000000;
    n %= 10000000;
    
    answer += n / 1000000;
    n %= 1000000;
    
    answer += n / 100000;
    n %= 100000;
    
    answer += n / 10000;
    n %= 10000;
    
    answer += n / 1000;
    n %= 1000;
    
    answer += n / 100;
    n %= 100;
    
    
    answer += n / 10;
    n %= 10;

    answer += n;
    
    return answer;
}