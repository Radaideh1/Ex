#include "2.h"


void Is_Ca_or_Sma(char ch) {

	if (ch >= 'a' && ch <= 'z')
		cout << "This Character " << ch << "is small" << endl;
	else 
		cout << "This Character " << ch << "is Cabitall" << endl;

}

int FindSumOf5Multiples(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 5 == 0)
			sum += a[i];
	}


	return sum;
}

int sumDigonal(int a[][4], int rows, int cols) {

	int sum = 0;
	for (int i = 0, j = 0; i < rows;) {
		if (i == j) 
			sum += a[i][j]; i++; j++;
				
	}
	return sum;
}

void SeperateNumbers(const char* a, char* r) {
	while (*a != '\0') {
		if (*a >= '0' && *a <= '9') {
			*r = *a;  // انسخ الرقم
			r++;      // انتقل للموقع التالي في r
		}
		a++;  // انتقل للحرف التالي في a
	}
	*r = '\0';  // أنهي السلسلة
}