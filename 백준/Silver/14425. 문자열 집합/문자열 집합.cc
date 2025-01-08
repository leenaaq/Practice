#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, s, sum = 0;
    cin >> n >> s;
    string str;
    vector<string> strArr;
    for (int i = 0; i < n; i++) {
        cin >> str;
        strArr.push_back(str);
    }
    sort(strArr.begin(), strArr.end());
    for (int i = 0; i < s; i++) {
        cin >> str;
        if (binary_search(strArr.begin(), strArr.end(), str)) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}
