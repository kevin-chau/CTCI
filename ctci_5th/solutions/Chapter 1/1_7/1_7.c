#include <stdio.h>
#include <string.h>

void zeroRowsAndColumns (int ** matrix) {
	// find all the zeros first
	int numRows = sizeof(matrix) / sizeof(matrix[0]);
	int numCols = sizeof(matrix[0]) / sizeof(int);

	printf("Num of rows: %d\n", numRows);

	//int rows[ sizeof(matrix / sizeof(matrix[0])) ] = {0};
	//int columns[ sizeof(matrix[0]) / sizeof(int) ] = {0};
	// for(int i = 0; i < sizeof(matrix) / sizeof(matrix[0]); i++){

	// 	for(int j = 0; j < sizeof(matrix[0] / sizeof(int); j++){
	// 		if (matrix[i][j] == 0){
	// 			//add to hash of rows with zero and hash of columns with zeros
	// 		}
	// 	}

	// }

	//then zero rows

	//then zero columns
}


int main () {
	int matrix[2][3] = {{1,0,3},{0,1,5}};
	zeroRowsAndColumns((int**)matrix);
	return 0;
}