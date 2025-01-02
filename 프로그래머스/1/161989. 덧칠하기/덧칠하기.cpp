#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0, end = 0;

    for (int start : section) {
        if (start > end) { 
            answer++; 
            end = start + m - 1;
        }
    }

    return answer;
}