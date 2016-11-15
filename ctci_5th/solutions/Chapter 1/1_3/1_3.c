// Given two srings, write a method to decide if one is a perutation of the other
#include <stdio.h>
#include <string.h>

// n^2 sorting algorithm, sorts a string in-place
void bubbleSort(char s[]){
	char temp;
	//maximum number of passes is the total string length
	for (int i = 0; i < strlen(s); i++){
		// Each pass puts the next highest element in proper order/place
		for (int j = 0; j < strlen(s) - i - 1; j++){
			//compare adjacent elements
			if (s[j] > s[j+1]) {
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
}

int isPermutation(char s1[], char s2[]){
	if (strlen(s1)!=strlen(s2)){
		return 0;
	}
	// Sort s1 (bubble sort here)
	bubbleSort(s1);
	// Sort s2
	bubbleSort(s2);
	// Compare character by character
	for(int i = 0; i < strlen(s1); i++){
		if (s1[i] != s2[i]){
			return 0;
		}
	}

	return 1;
}

int main () {
	char s1[50];
	char s2[50];
	strcpy(s1, "kjhfjklabnmnbs");
	strcpy(s2, "ljhsfmkkabjnnb");
	//test bubble sort
	//bubbleSort(s1);
	//printf("kjhfjklabnmnbs : %s\n", s1);

	printf("isPermutation(kjhfjklabnmnbs,ljhsfmkkabjnnb) : %d\n", isPermutation(s1,s2));
	return 0;
}