#include <iostream>
using namespace std;

string fun2(string s) {
    string result = "";
    int num = s.size();
    if (num % 2 == 0) {
        for (int i = 0; i < num / 4; i++) result += "AAAA";
        num %= 4;
        for (int i = 0; i < num / 2; i++) result += "BB";
    }
    else result = "-1";
    return result;
}

string fun(string s) {
    string str = "", result = "";
     for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            str += s[i];
        }
        else if (s[i] == '.') {
            string str2 = fun2(str);
            if (str2 == "-1") return "-1";
            result += str2 + ".";
            str = "";
        }
        else {
            return "-1";
        }
        
    }
     if (!str.empty()) {
         string str2 = fun2(str);
         if (str2 == "-1") return "-1";
         result += str2;
     }
    return result;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    cout << fun(str);
    return 0;
}
