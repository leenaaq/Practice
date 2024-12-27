#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) return {-1};
    else {
        int minNum = *min_element(arr.begin(), arr.end());
        arr.erase(remove(arr.begin(), arr.end(), minNum), arr.end());
        answer = arr;
        return answer;
    }
}