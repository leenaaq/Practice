#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string numC[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string result = "";
    string temp = "";
    
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i]) == 1) result.push_back(s[i]);
        else {
            temp.push_back(s[i]);
            for(int j = 0; j < 10; j++){
                if(temp == numC[j]) {
                    result.push_back('0'+j);
                    temp = "";
                    break;
                }
            }
        }
    }
    answer = stoi(result);
    return answer;
}