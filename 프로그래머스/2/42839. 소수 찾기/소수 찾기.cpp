#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

bool isPrime(int n)
{
    if(n < 2) 
    {
        return false;
    }
    
    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(string numbers) {
    vector<char> num;
    set<int> answer;
    int cnt = 0;
    
    for(int i = 0; i < numbers.length(); i++)
    {
        num.push_back(numbers[i]);
    }

    sort(num.begin(), num.end());

    do
    {
        for(int k = 1; k <= num.size(); k++)
        {
            string tmp = "";
            for(int j = 0; j < k; j++)
            {
                tmp += num[j];
            }
            answer.insert(stoi(tmp));
        }
    }
    while(next_permutation(num.begin(), num.end()));

    for(auto x : answer)
    {
        if(isPrime(x))
        {
            cnt++;
        }
    }
    return cnt;
}
