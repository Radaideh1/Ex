#include "12.h"

void RowMax(int a[][3], int row, int col) {

	int max;
	for (int i = 0; i < row; i++) {
		max = a[i][0];
		for (int j = 1; j < col; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
			}
		}
		cout << "The max number in row " << i + 1 << " is " << max << endl;
	}

}


bool Check(const char* txt) {

	while (*txt != '\0') {
		if (*txt == 'C' && *(txt + 1) == '+' && *(txt + 2) == '+')
			return true;
		else
			return false;

	}


}