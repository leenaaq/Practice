#include <iostream>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    bool isTrue = 1;
    for (int i = 0; i < str.length() / 2; i++) if (str[i] != str[str.length() - i - 1]) isTrue = false;
    cout << isTrue;
    return 0;
}
