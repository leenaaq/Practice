#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string week[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int result = 0;
    for (int i = 0; i < a - 1; i++) {
        result += month[i];
    }
    result += b - 1; 


    string answer = week[result % 7];
    return answer;
}