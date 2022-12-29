#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int denum1, int num1, int denum2, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*denum1);
    
    int denum = (denum1 * num2) + (denum2 * num1);  // 분자
    int num = num1 * num2;  // 분모
    int min = 0;
    
    if(denum<num) min = denum;
    else min = num;
    
    for(int i=min; i>=2; i--) {
        if(denum%i==0 && num%i==0) {
            denum /= i;
            num /= i;
            break;
        }
    }
    
    answer[0] = denum;
    answer[1] = num;
    
    return answer;
}