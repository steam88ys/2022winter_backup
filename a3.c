#include <stdio.h>

int main () {
	
	int arr1[2][3] = {{1,2,3},{4,5,6}};
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	
	int arr2[2][3] = {0};
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	
}
