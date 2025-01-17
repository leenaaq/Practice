#include <iostream>

using namespace std;

int Rev(int n) {
	int a = 0, b = 0, c = 0;
	if (n >= 1000) {
			a = n / 1000;
			n %= 1000;
	}

	if (n >= 100){
			b = n / 100;
			n %= 100;
	}

	if (n >= 10) {
			c = n / 10;
			n %= 10;
	}
	if (a > 0) return (n * 1000) + (c * 100) + (b * 10) + a;
	else if (b > 0) return (n * 100) + (c * 10) + b;
	else if (c > 0) return (n * 10) + c;
	else return n;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y; cin >> x >> y;
	cout << Rev(Rev(x) + Rev(y));
	return 0;
}
