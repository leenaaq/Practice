#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.length();
    char temp;

    for (int i = 0; i < len; i++) {
        stack<char> st;
        bool isValid = true;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    isValid = false;
                    break;
                }
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid && st.empty()) answer++;

        temp = s[0];
        for (int j = 0; j < len - 1; j++) {
            s[j] = s[j + 1];
        }
        s[len - 1] = temp;
    }

    return answer;
}