#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int num;
    
    for(int su = i; su<=j; su++) {
        num = su;
        while(num!=0) {
            if(num%10 == k) answer++;
            num/=10;
        }
    }  
    
    return answer;
}