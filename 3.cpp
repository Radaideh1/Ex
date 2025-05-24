#include "3.h"



// 2 void exch
void swap(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;

}


int MaxN(int a[], int size) {
	int max = a[0];
	int IMax;
	for (int i = 0; i < size; i++)
		if (max < a[i]) {
			max = a[i];
			IMax = i;
		}
	return IMax;
}
int MinN(int a[], int size) {
	int min = a[0];
	int IMin;
	for (int i = 0; i < size; i++)
		if (min > a[i]) {
			min = a[i];
			IMin = i;
		}
	return IMin;
}
void exchangeminmax(int a[], int size) {
	int i = MaxN(a, size);
	int j = MinN(a, size);
	swap(a[i], a[j]);
}

// 3 

void swapI(int& a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;

}
void minnum(int a[][3], int cols, int r1, int r2) {

	int min[3];
	for (int i = 0; i < cols; i++) {
		if (a[r1 - 1][i] > a[r2 - 1][i]) {
			min[i] = a[r2 - 1][i];
		}
		else if (a[r1 - 1][i] < a[r2 - 1][i])
			min[i] = a[r1 - 1][i];
	}
	for (int i = 0; i < 3; i++) {
		swapI(a[r2 - 1][i], min[i]);
		swapI(a[r1 - 1][i], min[i]);
	}



}

// 4
void nextletter(const char* s) {
	char result[100];
	int i = 0;
	while (s[i] != '\0') {

		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
			result[i] = s[i] + 1;
		else
			result[i] = s[i];
		i++;
	}
	result[i] = '\0';

	cout << result << endl;

}
