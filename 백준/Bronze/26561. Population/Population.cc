#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, t; cin >> n;
    while (n--) {
        cin >> p >> t;
        cout << p - (t / 7) + (t / 4) << "\n";
    }
    return 0;
}
