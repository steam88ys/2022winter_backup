#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = -1;
    int i =0;
    while(num!=0) {
        if(num%10==k) answer = i;
        num/=10;
        i++;
        
    }
    if(answer == -1) return -1;
    return i-answer;
}