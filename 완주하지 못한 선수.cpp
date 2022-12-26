#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int> d;
    
    for(auto& i : participant) d[i]++;  // d[i] = d[i]+1;
    for(auto& i : completion) d[i]--;   // d[i] = d[i]-1;
    for(auto& i : d) {
        if(i.second > 0) {
            answer = i.first;
            break;
        }
    }
    
    return answer;
}