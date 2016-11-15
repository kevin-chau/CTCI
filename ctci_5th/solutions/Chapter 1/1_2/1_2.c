/* Question 1.2 */
/* Implement a function void reverse(char* str) in C or C++ which 
reverses a null terminated string */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* str){
	char temp;
	char * end = str;
	//Find end
	//printf("Finding end..\n");
	while (*end){ end++; }
	end--;
	//printf("Found end\n");
	while (str < end){
		//printf("Swapping\n");
		temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--; 
	} 
}

int main () {
	char * s1 = "Hello!";
	char * s2 = "Goodbye";
	char * s1buff = malloc(strlen(s1) + 1);
	strcpy(s1buff, s1);
	char * s2buff = malloc(strlen(s2) + 1);
	strcpy(s2buff, s2);

	reverse(s1buff);
	reverse(s2buff);
	printf("Hello! : %s\n", s1buff);
	printf("Goodbye : %s\n", s2buff);

	free(s1buff);
	return 0;
}

