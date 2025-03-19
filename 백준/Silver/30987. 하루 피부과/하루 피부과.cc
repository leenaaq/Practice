#include <iostream>
using namespace std;

int a, b, c, d, e;

int cal(int x)
{
    int result = a * (x * x * x) / 3 + (b - d) * (x * x) / 2 + (c - e) * x;
    return result;
}
int main()
{
    int x1, x2;

    cin >> x1 >> x2;
    cin >> a >> b >> c >> d >> e;

    cout << (cal(x2) - cal(x1));
    return 0;
}