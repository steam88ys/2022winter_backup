#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for(int i=0; i<my_str.length(); i++) {
        answer.push_back(my_str.substr(i,n));   // i: 시작위치, n: 끊어지는 갯수
        i+=n-1;
    }
    
    return answer;
}