#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string my_string, string alp) {
    string answer;
    for(int i = 0; i < my_string.length(); i++){
        for(int j = 0; j < alp.length(); j++){
            if(my_string[i] == alp[j]) my_string[i] = toupper(my_string[i]);
        }
    }

    answer = my_string;
    return answer;
}