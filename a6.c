#include <stdio.h>
#include <string.h> 

int main () {
	
	char s1[] = "Hello";
	printf("���ڿ��Ǳ��� = %d\n", strlen(s1));
	
	if(strcmp("Hello", s1)==0)
		printf("Hello�� %s�� ����\n", s1);
	else  
		printf("Hello�� %s�� �ٸ���\n", s1);
		
	if(strncmp("Hello", s1, 3)==0)
		printf("Hello�� %s�� ����\n", s1); 
		
	else 
		printf("Hello�� %s�� �ٸ���\n", s1); 
		 
}
