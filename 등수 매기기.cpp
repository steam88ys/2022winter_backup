#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_rows는 2차원 배열 score의 행 길이, score_cols는 2차원 배열 score의 열 길이입니다.
int* solution(int** score, size_t score_rows, size_t score_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*score_rows);
    double std[score_rows]; // 평균 저장할 배열
    
    // 평균 구하기
    for(int i=0; i<score_rows; i++) {
        std[i] = (score[i][0]+score[i][1])/2.0;
    }
    
    // 등수 구하기
    for(int i=0; i<score_rows; i++) {
        answer[i] = 1;
        for(int j=0; j<score_rows; j++) {
            if(std[i]<std[j]) answer[i]++;
        }
    }
    
    return answer;
}