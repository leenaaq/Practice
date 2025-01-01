#include <vector>
#include <iostream>
using namespace std;

bool sol(int num){
    int sum = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0) sum++;
    }
    if(sum == 2) return true;
    else return false;
}

int solution(vector<int> nums) {
    int answer = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                int sum = nums[i] + nums[j] + nums[k];
                if(sol(sum) == true) answer++;
            }
        }
    }
    return answer;
}