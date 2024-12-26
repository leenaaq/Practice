#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string a = "";
    for(int i = 0; i < sizeof(n); i++){
        a += n % 10;
        n /= 10;
    }
    answer = stoi(a);
    return answer;
}