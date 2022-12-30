#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int max = 0;
    
    for(int i=0; i<array_len; i++) {
        int count = 0;
        for(int j=i; j<array_len; j++) {    // data가 array에 몇 개 있는지
            if(array[i] == array[j]) count++;
        }
        if(max == count) answer = -1;
        else if(max < count) {
            max = count;
            answer = array[i];
        }
    }
    
    return answer;
}