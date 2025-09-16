#include <string>
#include <vector>
#include <map>
#include <string>

using namespace std;

int solution(string myString, string pat) {
    map <char, char>m {{'A', 'B'}, {'B', 'A'}};
    for(int i = 0; i < myString.length(); i++)
    {
        myString[i] = m[myString[i]];
    }
    if(myString.find(pat) != string::npos) return 1;
    else return 0;
}