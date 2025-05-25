#include "6.h"


// 2 
int minMajor(int n[][2], int r, int c) {

	int min = n[0][0];
	for (int i = 0; i < r; i++) {
		if (min > n[i][0])
			min = n[i][0];

	}
	return min;
}

int SameMajor(int n[][2], int r, int c) {

	for (int i = 0; i < r; i++) {
		if (n[i][0] == n[i][1])
			return i;
	}
	return -1;
}

int simCols(int n[][2], int r, int c) {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		sum += n[i][1];
	}
	return sum;
}

void majorStatistics(int n[][2], const int rows, const int cols, int m[], const int size) {

	m[0] = minMajor(n, rows, cols);

	m[1] = SameMajor(n, rows, cols);

	cout << simCols(n, rows, cols);
}



// 3 
bool qIsLetter(char q) {
	if (q >= 'a' && q <= 'z' || q >= 'A' && q <= 'Z')
		return true;
	return false;
}

void replaceDot(char* p, char q) {

	if (qIsLetter(q)) {
		while (*p != '\0') {
			if (*p == '.')
				*p = q;
			p++;
		}
	}
	else
		while (*p != '\0') {
			if (*p == '.')
				*p = '!';
			p++;
		}


}



