#include <iostream>
#include <algorithm>
using namespace std;

void cal(int num) {
    int n, score[50], gap = -1; cin >> n;
    for (int i = 0; i < n; i++) cin >> score[i];

    sort(score, score + n);

    for (int i = 0; i < n - 1; i++) if (score[i+1] - score[i] > gap) gap = score[i+1] - score[i];

    cout << "Class " << num << "\n";
    cout << "Max " << score[n-1] << ", Min " << score[0] << ", Largest gap " << gap << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cal(i);
    }
    return 0;
}