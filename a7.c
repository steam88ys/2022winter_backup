#include <stdio.h>

int main () {
	int a[] = {1, 2, 3, 4, 5};
	int *a_pt= &a;
	
	printf("%d %d\n", a[0], *a_pt); 
	printf("%d %d\n", a[1], *(a_pt+1)); 
	printf("%d %d\n", a[2], *(a_pt+2)); 
	
//	printf("a주소 = %d\na_pt:%d\n\n", &a, a_pt);
//	printf("a값:%d\na_pt가 가리키는 값:%d\n",a, *a_pt);
}
