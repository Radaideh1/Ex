#include "10.h"


double AvgMidRwos(int x[][3], int rows, int cols) {
	double sum = 0, count = 0, ave;

	for (int i = 0; i < rows; i++) {
		for (int j = 1; j < cols; j++) {
			sum += x[i][j];
			count++;
		}

	}
	ave = sum / count;

	return ave;
}

int FindAnyThing(const char str1[], char ch) {
	int count = 0;
	while (*str1 != '\0') {
		if (*str1 == ch)
			return count;
		else
			count++;
		str1++;
	}
	return -1;
}

void copyFromStar(const char str1[], char* str2) {

	int start = FindAnyThing(str1, '*');
	if (start == -1) {
		*str2 = '\0';
		return;
	}

	str1 += start + 1;
	for (; (*str2 = *str1) != '\0'; str1++, str2++);

}


