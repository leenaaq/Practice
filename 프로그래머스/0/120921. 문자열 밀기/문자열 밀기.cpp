#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    if (A == B) return 0;
    while (answer < A.length()) {
        string C = A[A.length() - 1] + A.substr(0, A.length() - 1);
        A = C;
        answer++;
        if (A == B) return answer;
    }
    return -1;
}