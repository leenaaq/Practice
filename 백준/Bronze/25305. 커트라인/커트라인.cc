#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, score;
    vector<int> x;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> score;
        x.push_back(score);
    }
    sort(x.begin(), x.end(), greater<int>());
    cout << x[k-1];
    return 0;
}
