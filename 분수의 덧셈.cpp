#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    
    int denum = (denum1 * num2) + (denum2 * num1);  // 분자
    int num = num1 * num2;  // 분모
    
    for(int i=min(denum,num); i>=2; i--) {
        if(denum%i==0 && num%i==0) {
            denum /= i;
            num /= i;
            break;
        }
    }
    
    answer.push_back(denum);
    answer.push_back(num);
    
    return answer;
}