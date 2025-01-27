#include <string>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    char op = '0';
    string temp = "";

    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] == ' ') continue;
        
        if (my_string[i] == '+' || my_string[i] == '-') {
            if(!temp.empty()){
                if(op == '+') answer += stoi(temp);
                else if(op == '-') answer -= stoi(temp);
                else answer = stoi(temp);
                temp = "";
            }
            op = my_string[i];
        }
        else temp += my_string[i];
    }
    
    if (!temp.empty()) {
        if (op == '+') answer += stoi(temp);
        else if (op == '-') answer -= stoi(temp);
        else answer = stoi(temp);
    }
    return answer;
}