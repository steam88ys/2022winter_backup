#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*n);
    
    int idx = 0;
    for(int j=1; j<=n; j++) {
        if(j%2!=0) {
            answer[idx] = j;
            idx++;
        }
    }
    
    
    return answer;
}