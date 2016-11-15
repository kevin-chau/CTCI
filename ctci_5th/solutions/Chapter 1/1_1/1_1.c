/* Question 1.1 */
/* Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures? */

#include <stdio.h>
#include <stdbool.h>

bool allUniqueCharacters(char * s){
	// use array to keep track of ascii characters seen. Index is character
	bool characters[128] = {false};
	while (*s != '\0'){
		if (characters[*s]) {
			//printf("FOUND A DUPLICATE CHARACTER!\n");
			return false;
		}
		//printf("NEW CHARACTER!\n");
		characters[*s] = true;
		s++;
	}
	return true;
}

int main(){
	char * s1 = "HELLO";
	char * s2 = "HOLA";
	char * s3 = "CODING";

	if (allUniqueCharacters(s1)==false){printf("PASS\n");} else {printf("FAIL\n");}
	if (allUniqueCharacters(s2)==true){printf("PASS\n");} else {printf("FAIL\n");}
	if (allUniqueCharacters(s3)==true){printf("PASS\n");} else {printf("FAIL\n");}
}