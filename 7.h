include "Header.h"


int ColSum(int a[][3], int row, int col) {

	int sum = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 2; j++) {
			sum += a[i][j];
		}

	}

	return sum;
}


void Fcn(char* s) {
	int i = 0;
	while (*(s + i) != '\0') {
		if (((s + i) - s) % 2) {
			*(s + i) = 'S';
		}
		i++;

	}


}

