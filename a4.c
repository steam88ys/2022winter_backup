#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	int *a = (int*) malloc(sizeof(int)*10);
	
	for(int i=0; i<10; i++) a[i] = 0;
	//memset(a, 0, sizeof(int)*10);
	
	for(int i=1; i<10; i++) {
			printf("%d %d\n", i, a[i]);
	}
	
}
