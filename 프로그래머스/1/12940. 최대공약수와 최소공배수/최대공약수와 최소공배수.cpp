#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a, c;
    vector<int> b;
    if(n > m) swap(n, m);
    
    for(int i = 1; i <= n * m; i++){
        if(n % i == 0 && m % i == 0) a = i;
        if(i % n == 0) b.push_back(i);
    }
    
    for(int i = 1; i <= n * m; i++){
        if(i % m == 0 && find(b.begin(), b.end(), i) != b.end()){
            c = i;
            break;
        }
    }
    answer.push_back(a);
    answer.push_back(c);

    return answer;
}