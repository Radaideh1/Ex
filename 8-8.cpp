#include "8.h"

double AvgFcn(int Arr[][3], int row, int cols) {

	double sum = 0, count = 0;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			if (Arr[i][j] < 0) {
				sum += Arr[i][j]; count++;
			}
		}
	}
	double ave = sum / (count * 1.0);


	return ave;
}

void CountFcn(const char* text) {
	int count = 1;
	while (*text != '\0') {
		if (*text == ' ')
			count++;
		text++;
	}
	cout << count << endl;

}

