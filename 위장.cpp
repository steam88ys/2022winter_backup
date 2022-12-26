#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    map<string, int>m;  // 옷의 종류 key, 종류의 수 value
    vector <string> v;  // 옷의 종류 저장
    
    for(int i=0; i<clothes.size(); i++) {
        if(m[clothes[i][1]] == 0) {
            m[clothes[i][1]] = 1;
            v.push_back(clothes[i][1]);
        }
        else m[clothes[i][1]]++;
    }
    int result = 1;
    for(int i=0; i<v.size(); i++) result*=(m[v[i]]+1);
    result -= 1;
    return result;
}