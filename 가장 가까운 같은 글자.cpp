#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    unordered_map<char, int> m;
    for(int i=0; i<s.size(); i++) {
        if(m.find(s[i]) != m.end()) {   // 찾은 경우
            answer.push_back(i-m[s[i]]);
            m[s[i]] = i;    // 해당 문자의 위치값
        } 
        else {  // 못찾은 경우
            answer.push_back(-1);
            m[s[i]] = i;    // 해당 문자의 위치값
        }
    }
    
    
    return answer;
}