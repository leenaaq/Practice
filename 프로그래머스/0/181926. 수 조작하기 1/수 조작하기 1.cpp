#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int n, string control) {
    map<char, int> m {{'w', 1}, {'s', -1}, {'d', 10}, {'a', -10}};
    for(int i = 0; i < control.length(); i++)
    {
        n += m[control[i]];
    }
    return n;
}