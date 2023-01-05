// ������ ���� include�� ����� �� �ֽ��ϴ�.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    // ���⿡ �ڵ带 �ۼ����ּ���.
    int count = 0;
    int y[4] = {-1, 1, 0, 0};
   int x[4] = {0, 0, -1, 1};
   int danger = 0;
   for(int i = 0; i<height_len; i++){
      for(int j = 0; j<height_len; j++){
         danger=1;
         for(int k = 0; k < 4; k++){
            if(i+y[k] >= 0 && i+y[k]<4 && j+x[k] >= 0 && j+x[k]<4)
               if(height[i][j] >= height[i+y[k]][j+x[k]])
                  danger=0;
         }   
         if(danger==1)
            count++;
         }
      }
    return count;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int height[4][4] = {{3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9}};
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
