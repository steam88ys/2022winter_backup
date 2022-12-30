#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int answer = 0;
    
    int data[200] = {0, }; // 초기화
    
    for(int i=0; i<lines_rows; i++) {   // 선분개수
        for(int j=lines[i][0]; j<lines[i][1]; j++) {   // 선분길이
            data[j+100]++;   // 수직선 0 위치 조정
        }
    }
    
    for(int i=0; i<200; i++) {  // 수직선 양수 음수 표현(-100~100)
        if(data[i]>1) answer++;
    }
    
    return answer;
}