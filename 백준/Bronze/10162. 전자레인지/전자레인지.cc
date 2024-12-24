#include <iostream>
#include <array>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int time[3] = { 300, 60, 10 }, btn[3] = {0, }, t; cin >> t;
    //a = 5분, b = 1분, c = 10초, t = 요리해야할 시간 t(초)
    for(int i = 0; i < sizeof(time)/sizeof(int); i++){
        if (t >= time[i]) {
            btn[i] = t / time[i];
            t = t % time[i];
        }
    }
    
    if (t > 0) cout << "-1";
    else for (int i = 0; i < sizeof(time) / sizeof(int); i++) cout << btn[i] << " ";

    return 0;
}
