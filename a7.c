#include <stdio.h>

int main () {
	int a[] = {1, 2, 3, 4, 5};
	int *a_pt= &a;
	
	printf("%d %d\n", a[0], *a_pt); 
	printf("%d %d\n", a[1], *(a_pt+1)); 
	printf("%d %d\n", a[2], *(a_pt+2)); 
	
//	printf("a�ּ� = %d\na_pt:%d\n\n", &a, a_pt);
//	printf("a��:%d\na_pt�� ����Ű�� ��:%d\n",a, *a_pt);
}
