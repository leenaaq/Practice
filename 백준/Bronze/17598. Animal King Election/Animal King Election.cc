#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int num[2] = { 0, };
	for (int i = 0; i < 9; i++)
	{
		cin >> str;
		if (str == "Lion") num[0]++;
		else if (str == "Tiger") num[1]++;
	}

	if (num[0] > num[1]) cout << "Lion";
	else cout << "Tiger";
	return 0;
}