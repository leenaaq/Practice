#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = 0;
    int a = x;
    int sum = 0;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    if(a % sum == 0) answer = 1;
    return answer;
}