#include "9.h"



double FiveAvg(int a[][3], int row, int col) {
	double sum = 0, ave;
	int count = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (!(a[i][j] % 5)) {
				sum += a[i][j];
				count++;
			}
		}
	}
	ave = sum / (count * 1.0);


	return ave;
}


void ShiftString(char* word) {

	while (*word != '\0') {
		*word = *(word + 1);

		word++;
	}
	*word = '\0';
}


