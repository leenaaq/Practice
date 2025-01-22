#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//vector <vector<int>> arr;
	int n, m, num; cin >> n >> m;
	vector<vector<int>> arr(n + 1, vector<int>(n + 1));
	vector<vector<int>> sum(n + 1, vector<int>(n + 1));
	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (i == 0 || j == 0)
			{
				arr[i][j] = 0;
				sum[i][j] = 0;
			}
			else
			{
				cin >> arr[i][j];
				sum[i][j] = sum[i][j - 1] + sum[i - 1][j] + arr[i][j] - sum[i - 1][j - 1];
			}
		}
	}

	int x1, x2, y1, y2;
	for (int i = 0; i < m; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1] << "\n";
	}
	return 0;
}