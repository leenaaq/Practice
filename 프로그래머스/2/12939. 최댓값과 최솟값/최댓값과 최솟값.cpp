#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string str = "";
    vector<int> v;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            v.push_back(stoi(str));
            str = "";
        }
        else
        {
            str += s[i];
        }
    }
    v.push_back(stoi(str));
    sort(v.begin(), v.end());
        
    return to_string(v[0]) + " " + to_string(v[v.size() - 1]);
}