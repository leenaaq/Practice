#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, a; cin >> n >> m;
	vector<int> arr;
	arr.push_back(0);
	for (int i = 1; i <= n; i++) {
		cin >> a;
		arr.push_back(arr[i - 1] + a);
	}
	int x, y, sum;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		sum = arr[y] - arr[x - 1];
		cout << sum << "\n";
	}
	return 0;
}
