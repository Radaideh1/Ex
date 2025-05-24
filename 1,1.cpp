#include "H_For_Work.h"

// multipile of 7 !!
bool Multipl_7(int num) {return num % 7 ? false : true;}

void ConvertToEven(int a[], int size) {

	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0)
			a[i] = a[i] - 1;

	}
}

bool CheckIdentity(int a[][4], int size) {
	int colu = 4;
	int row = size / colu;
	int ide[4] = { 0,0,0,0 };
		for (int j = 0, i = 0; j < colu;) {
			ide[j] += a[i][j];
				i++; j++;
		}
	if (ide[0] == 1 && ide[1] == 1&& ide[2] ==1 && ide[3] == 1)
		return true;
	else
		return false;
}

int PunctuationMarksCount(const char* a) {
	int count = 0;
	for (; *a != '\0'; a++) {
		if (*a == ',' || *a == ';' || *a == '.' || *a == '?' || *a == '!')
			count++;
	}
	return count;
}
