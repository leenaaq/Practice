#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n + 2, 0);
    
    for(int r : reserve) students[r]++;
    for(int l : lost) students[l]--;
    
    for(int i = 1; i <= n; i++){
        if(students[i] == -1){
            if(students[i - 1] == 1){
                students[i - 1]--;
                students[i]++;
            }
            else if(students[i + 1] == 1){
                students[i + 1]--;
                students[i]++;
            }
        }
    }
    for(int i = 1; i <= n; i++) if(students[i] >= 0) answer++;
    return answer;
}