#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    
    int answer = -1;
    map<int, int> m1, m2;   // m1:형, m2:동생
    
    for(auto i:topping) m1[i]++;    // 토핑종류 개수 저장
    
    for(int i=0; i<topping.size(); i++) {
        // 형이 동생한테 토핑 나눠줌
        m2[topping[i]]++;
        m1[topping[i]]--;
        
        // 갯수가 0개면 토핑종류 삭제
        if(m1[topping[i]] == 0) 
            m1.erase(topping[i]);   
        
        // 토핑의 개수가 같으면 
        if(m1.size() == m2.size()) answer++;
        
    }
    
    return answer+1;
}