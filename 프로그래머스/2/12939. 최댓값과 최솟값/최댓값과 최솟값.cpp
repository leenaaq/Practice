#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string str = "";
    int min, max;
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
    min = v[0];
    max = v[0];
    
    for(int i = 1; i < v.size(); i++)
    {
        if(max < v[i])
        {
            max = v[i];
        }
        if(min > v[i])
        {
            min = v[i];
        }
    }
    
    return to_string(min) + " " + to_string(max);
}