#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a;
    for(int i = 1; ; i++){
        getline(cin, a);
        if (a[0] == '0') return 0;
        cout << "Case " << i << ": Sorting... done!\n";
    }
    return 0;
}
