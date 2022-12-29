#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(int* num1, int* num2) {
    char num_cmp1[10] = "";
    char num_cmp2[10] = "";
    sprintf(num_cmp1, "%d%d", *num1, *num2);
    sprintf(num_cmp2, "%d%d", *num2, *num1);
    if(strcmp(num_cmp1, num_cmp2)<0) return 1;
    else if(strcmp(num_cmp1, num_cmp2)==0) return 0;
    else return -1;
}

// numbers_len은 배열 numbers의 길이입니다.
char* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000000);
    char nums[5] = "";
    qsort(numbers, numbers_len, sizeof(int), compare);
    
    for(int i=0; i<numbers_len; i++) {
       sprintf(nums, "%d", numbers[i]);
        strcat(answer, nums);
    }
    
    if(answer[0]=='0')strcpy(answer, "0");
    return answer;
}