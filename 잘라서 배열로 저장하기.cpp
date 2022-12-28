#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_str, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = (int)ceil(strlen(my_str)/(double)n);  // 올림함수 double ceil(double )
    char** answer = (char**)malloc(sizeof(char*)*size); // 문자열 배열 개수 세팅
    
    for(int i=0; i<size; i++) {
        *(answer+i) = (char*)malloc(sizeof(char)*(n+1));    // n개씩 잘라서 저장되는 포인터
    }
    
    int k =0;
    for(int i=0; i<size; i++) {
        int j;
        for(j=0; j<n&&my_str[k]; j++) { // n개이면서 my_stsr의 데이터 있을 때까지
            answer[i][j] = my_str[k++];
        }
        answer[i][j] = '\0';
    }
    
    return answer;
}