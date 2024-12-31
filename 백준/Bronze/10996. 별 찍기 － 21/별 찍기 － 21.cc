#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

	if (n == 1) cout << "*\n";
	else
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n / 2 + n % 2; j++) cout << "* ";
			cout << "\n";
			for (int j = 0; j < n / 2; j++) cout << " *";
			cout << "\n";
		}
	}
    return 0;
}
