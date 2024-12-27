#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    bool a = 0;
    while(n--){
        if(a == 0) {
            answer += "수";
            a = 1;
        }
        else {
            answer += "박";
            a = 0;
        }
    }
    return answer;
}