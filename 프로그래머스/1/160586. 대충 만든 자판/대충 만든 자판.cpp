#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int Count(char target, string key) { // 분리된 타겟 글자를 가져와
    int cnt = 0;
    for (int i = 0; i < key.length(); i++) {
        cnt++;
        if (target == key[i])  {
            //cout << "target : " << target << " " << "key : " << key << " cnt : " << cnt << "\n";
            return cnt;
        }
    }
    return 1000000; // 문자가 없을 경우 큰 값 반환
}

void Sol(vector<string> keymap, string targets, vector<int> *answer) { // 타겟 한 글자씩 분리하고
    int sum = 0;
    for (int i = 0; i < targets.size(); i++) {
        //cout << targets[i] << " ";
        vector<int> temp;
        for (int j = 0; j < keymap.size(); j++) { // j 하나씩 count함수로
            //temp.push_back();
            int cnt = Count(targets[i], keymap[j]);
            temp.push_back(cnt); // 여기를 활성화
        }
        auto it = min_element(temp.begin(), temp.end());
        //cout << "리턴" << *it << "\n";
        if (*it == 1000000) { // 문자를 작성할 수 없는 경우
            answer->push_back(-1);
            return;
        }
        sum += *it;
        //*answer.push_back(sum);
    }
    //cout << sum << "\n\n";
    answer->push_back(sum); // 결과를 answer에 추가
}

vector<int> solution(vector<string> keymap, vector<string> targets) { // 타겟을 나누고 sol로
    vector<int> answer;
    for (int i = 0; i < targets.size(); i++) {
        Sol(keymap, targets[i], &answer);
    }
    return answer;
}
