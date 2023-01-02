#include <stdio.h>

int main () {
	int arr1[10];
	for(int i=0; i<10; i++) {
		printf("%d %d\n", i, arr1[i]);
	}
	
	int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i=0; i<10; i++) {
		printf("%d %d\n", i, arr2[i]);
	}
	
	int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i=0; i<10; i++) {
		printf("%d %d\n", i, arr3[i]);
	}
	
	int arr4[10] = {0,};
	for(int i=0; i<10; i++) {
		printf("%d %d\n", i, arr4[i]);
	}
}
