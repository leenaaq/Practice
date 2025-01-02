#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> KnightNum(int num) {
    vector<int> knight(num, 0);
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j * j <= i; j++) { 
            if (i % j == 0) {
                knight[i - 1]++;
                if (j != i / j) {
                    knight[i - 1]++; 
                }
            }
        }
    }
    return knight;
}


int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> knight = KnightNum(number);
    for(int i = 0; i < knight.size(); i++){
        if(knight[i] > limit) answer += power;
        else answer += knight[i];
    }
    return answer;
    
}
