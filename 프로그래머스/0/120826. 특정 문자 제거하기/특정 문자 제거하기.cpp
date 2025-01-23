#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++)
    {
        if(find(letter.begin(), letter.end(), my_string[i]) == letter.end()) answer += my_string[i];
    }
    return answer;
}