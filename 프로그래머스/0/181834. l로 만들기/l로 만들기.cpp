#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++)
    {
        if(int(myString[i]) < 109) answer += 'l';
        else answer += myString[i];
    }
    return answer;
}