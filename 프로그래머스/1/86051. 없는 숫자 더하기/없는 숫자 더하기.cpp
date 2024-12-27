#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    for(int i = 0; i < 10; i++){
        if (find(numbers.begin(), numbers.end(), num[i]) == numbers.end()) answer += num[i];
    }
    return answer;
}