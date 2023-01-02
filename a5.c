#include <stdio.h>
#include <string.h>

int main () {
	char* s1 = "highteen";
	char s2[] = "world korea";
	
	printf("\n%s", strncat(s2, s1, 3));
	//printf("%s", strcpy(s2, s1));
	//printf("\n%s", strncpy(s2, s1, 3));
	//printf("%s\n", s1);
}
