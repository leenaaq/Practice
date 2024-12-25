#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "", str = "";
    vector<int> v;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            v.push_back(stoi(str));
            str = "";
        }
        else str += s[i];
    }
    v.push_back(stoi(str));

    int min = v[0], max = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < min) min = v[i];
        if (v[i] > max) max = v[i];
    }
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);

    return answer;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    cout << solution(s);

    return 0;
}