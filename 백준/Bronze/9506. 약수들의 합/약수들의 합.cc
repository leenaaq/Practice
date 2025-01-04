#include <iostream>
#include <string>
using namespace std;

void cal(int n) {
    int sum = 1;
    string str = to_string(n) + " = 1";
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            sum += i;
            str += " + " + to_string(i);
        }
    }
    if (sum == n) cout << str + "\n";
    else cout << n << " is NOT perfect.\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (1) {
        cin >> n;
        if (n == -1) break;
        cal(n);
    }

    return 0;
}
