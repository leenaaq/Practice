#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++)
    {
        if(i == 0 || answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}