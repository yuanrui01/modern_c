#include<stdio.h>
#include<string.h>

#define SIZE 128

int main(int argc, char const *argv[])
{
	char s1[SIZE];
	char s2[SIZE];
	strcpy(s1, "computer"); 
	strcpy(s2, "science"); 
	if (strcmp(s1, s2) < 0) 
		strcat(s1, s2); 
	else 
		strcat(s2, s1); 
	s1[strlen(s1)-6] = '\0';

	printf("s1 is %s\n", s1);
	return 0;
}