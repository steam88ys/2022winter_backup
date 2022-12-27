#include <string>
#include <vector>
#include <algorithm>    // sort 사용하기 위해서
#include <map>

using namespace std;

bool cmp(int a, int b) { return a<b; }  // sort 처리를 위한 정렬 기준 함수

int solution(vector<vector<int>> lines) {
    int answer = 0;
    
    map<pair<int,int>,int> m;
    for(auto &i : lines) { sort(i.begin(), i.end(), cmp); }   // 오름 차순으로 정렬
    for(auto &i : lines) {
        for(int j = i[0]; j<i[1]; j++) m[make_pair(j, j+1)]++;    // 한칸씩 선분이 있으면 카운트
    }
    for(auto &i:m) { if(i.second>=2) answer++; }    // 맵에 값이 2이상이면 칸이 겹치는 것
    
    return answer;
}