#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int cal(int n1, int n2){
    //cout << (n1 * n2) / gcd(n1, n2) << "\n";
    return (n1 * n2) / gcd(n1, n2);
}

int solution(vector<int> arr) {
    int answer = arr[0];
    sort(arr.begin(), arr.end());
    for(int i = 1; i < arr.size(); i++){
        answer = cal(answer, arr[i]);
    }
    return answer;
}