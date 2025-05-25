#include "14.h"


int Dia_Fcn(int arr[][3], int row, int col) {
	int pro = 1;
	for (int i = 0; i < row; i++) {
		pro *= arr[i][i];
	}
	return pro;

}

void MyCopy(const char* s1, char* s2) {
	s1 += 4;

	for (; (*s2 = *s1) != '\0'; s2++, s1++);

}