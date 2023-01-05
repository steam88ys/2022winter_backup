#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len) {
    int answer = 0;
    for(int i=0; i<scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];
    return answer;
}

int func_b(int scores1[], int scores2[], int scores_len) {
    int answer = 0;
    for(int i=0; i<scores_len; i++)
        if (answer > scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];
    return answer;
}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);
    answer[1] = func_b(mid_scores, final_scores, mid_scores_len);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    int mid_scores[] = {20, 50, 40};
    int final_scores[] = {10, 50, 70};
    int* ret = solution(mid_scores, 3, final_scores, 3);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < 2; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}

