#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sum = 0, coin; cin >> n;
    for (int i = 0; i < 2; i++) for (int j = 0; j < n; j++) {
        cin >> coin;
        if (coin < 0) sum += coin *= -1;
        else sum += coin;
    }

    cout << sum;
    
    return 0;
}
