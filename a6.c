#include <stdio.h>
#include <string.h> 

int main () {
	
	char s1[] = "Hello";
	printf("문자열의길이 = %d\n", strlen(s1));
	
	if(strcmp("Hello", s1)==0)
		printf("Hello와 %s는 같다\n", s1);
	else  
		printf("Hello와 %s는 다르다\n", s1);
		
	if(strncmp("Hello", s1, 3)==0)
		printf("Hello와 %s는 같다\n", s1); 
		
	else 
		printf("Hello와 %s는 다르다\n", s1); 
		 
}
