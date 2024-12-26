#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> a;
    while(n){
        a.push_back(n % 10);
        n /= 10;
    }
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < a.size(); i++){
        answer *= 10;
        answer += a[i];
    }
    return answer;
}