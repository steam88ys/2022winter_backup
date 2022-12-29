#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*10);
    char *id = id_pw[0];    // 로그인한 id
    char *pw = id_pw[1];    // 로그인한 pw
    
    int i;
    for(i=0; i<db_rows; i++) {
        if(strcmp(id, db[i][0])==0) {   // id 같은지 검사
            if(strcmp(pw, db[i][1])==0) strcpy(answer, "login");    // id가 같으면 pw같은지 검사
            else strcpy(answer, "wrong pw");    // pw오류인 경우
            break;
        } 
    }
    if(i==db_rows) strcpy(answer, "fail");  // 회원 목록에서 검사했는데 같은 id 못 찾은 경우
    
    return answer;
}