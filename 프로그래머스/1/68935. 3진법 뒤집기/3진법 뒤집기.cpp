#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> num;
    while(n > 2){
        num.push_back(n % 3);
        n /= 3;
    }
    num.push_back(n);
    
    int j = 0;
    for(int i = num.size()-1; i >= 0; i--){
        answer += pow(3, j) * num[i];
        j++;
    }
    return answer;
}