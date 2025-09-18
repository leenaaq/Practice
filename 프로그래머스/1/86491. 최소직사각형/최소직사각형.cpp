#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int a, b;
    for(int i = 0; i < sizes.size(); i++)
    {
        sort(sizes[i].begin(), sizes[i].end());
        if(i == 0)
        {
            a = sizes[0][0];
            b = sizes[0][1];
        }
        if(b < sizes[i][1])
        {
            b = sizes[i][1];
        }
        if(a < sizes[i][0])
        {
            a = sizes[i][0];
        }
    }
    
    return a * b;
}