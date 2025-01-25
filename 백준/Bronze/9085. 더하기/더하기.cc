#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, num; cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			sum += num;
		}
		cout << sum << "\n";
	}
	return 0;
}