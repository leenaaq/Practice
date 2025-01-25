#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    sort(array.begin(), array.end(), greater<int>());
    
    for(int arr : array){
        if(arr > height) answer++;
    }
    return answer;
}