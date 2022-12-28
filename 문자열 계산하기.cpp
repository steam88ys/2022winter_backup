#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    
    char *temp = strtok(my_string, " ");
    answer += atoi(temp);
    char op; int number;
    
    while(temp != NULL) {
        if(strcmp(temp,"+")==0) {
            temp = strtok(NULL, " ");
            answer += atoi(temp);
        }
        else if(strcmp(temp, "-")==0) {
            temp = strtok(NULL," ");
            answer -= atoi(temp);
        }
        else temp = strtok(NULL, " ");
    }  
    
    return answer;
}