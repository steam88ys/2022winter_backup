#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compare(const void*a, const void *b) {
        int num1 = *(int *)a;
        int num2 = *(int *)b;
        if(num1 < num2) return -1;  // a<b  -1
        if(num1 > num2) return 1;   // a>b  1
        return 0;   // a=b 0
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    int n = strlen(my_string);
    
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (char*)malloc(n*sizeof(int));
    int j=0;
    for(int i=0; i<n; i++) {
        if(isdigit(my_string[i])) answer[j++] = my_string[i]-'0';
    }
    
    int* arr = (int *)realloc(answer,sizeof(int)*j);
    
    qsort(answer, j, sizeof(int), compare);
    
    return answer;
}