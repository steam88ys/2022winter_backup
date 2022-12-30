#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    int* answer = (int*)malloc(sizeof(int)*num);
    
    int mid = total/num;
    int first = 0;
    
    if(num%2==0) first = mid - (num/2-1);
    else first = mid - (num/2);
    
    for(int i=0; i<num; i++,first++) {
        answer[i]=first;
    }
    
    return answer;
}