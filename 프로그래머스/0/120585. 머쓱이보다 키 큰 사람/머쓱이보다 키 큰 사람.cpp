#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    for(int arr : array){
        if(arr > height) answer++;
    }
    return answer;
}
