#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    int mid = total/num;    // 중간값은 평균값
    int first = 0;
    
    if(num%2==0) first = mid - (num/2-1);   // 짝수일 때
    else first = mid - (num/2);             // 홀수일 때
    
    for(int i=0; i<num; i++,first++) {
        answer.push_back(first);
    }
    
    return answer;
}