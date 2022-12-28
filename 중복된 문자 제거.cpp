#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_in(char ans[], int size, int ch) {
    for(int i=0; i<size; i++) {
        if(ans[i] == ch) return 1;   // 문자가 존재하면 true
    }
    return 0;
}
char* solution(const char* my_string) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)+1));
    
    int j=0;
    for(int i=0; my_string[i]; i++) {
        if(is_in(answer, strlen(answer), my_string[i]) ==0)
            answer[j++] = my_string[i];
    }    
    answer[j] = '\0';
    
    return answer;
}