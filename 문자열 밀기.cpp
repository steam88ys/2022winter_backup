#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int answer = 0;
    
    if(strcmp(A, B)==0) return 0; // 두 문자열이 같은 경우
    int n = strlen(A);
    
    char str[n+1];
    
    int i;
    for(i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            str[j] = A[j-1];
        }
        str[0] = A[n-1];
        str[n] = '\0';
        answer++;
        if(strcmp(str, B)==0) break;
        strcpy(A, str);
    }
        
    if(i==n) return -1;
    
    return answer;
}