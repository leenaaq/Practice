#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>

using namespace std;

pair<int, int> MoveDron(char command) {
    if (command == 'U') return { 0, 1 };
    else if (command == 'D') return { 0, -1 }; 
    else if (command == 'R') return { 1, 1 }; 
    else if (command == 'L') return { 1, -1 };
    return { 0, 0 };
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int hurdleNum, commandNum;
    cin >> hurdleNum >> commandNum;

    vector<pair<int, int>> hurdles;
    for (int i = 0; i < hurdleNum; i++) {
        int x, y;
        cin >> x >> y;
        hurdles.push_back({ x, y });
    }

    int dronX = 0, dronY = 0;

    for (int i = 0; i < commandNum; i++) {
        char command;
        cin >> command;

        auto [xy, move] = MoveDron(command);

        int newX = dronX, newY = dronY;
        if (xy == 0) newY += move;
        else if (xy == 1) newX += move; 

        if (find(hurdles.begin(), hurdles.end(), make_pair(newX, newY)) == hurdles.end()) {
            dronX = newX;
            dronY = newY;
        }
    }

    cout << dronX << " " << dronY;

    return 0;
}
