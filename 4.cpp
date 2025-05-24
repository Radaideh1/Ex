#include "4.h"

// for me :)
void sortI(int& a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
void sort(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}


// 1 

void SortArray(int num[], int size) {

	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size - 1;) {
			if (num[i] > (num[i + 1]))
				sort(num[i], num[i + 1]);
			i++;
		}

	}


}

int minsum(int x, int y, int z) {

	int sum = 0;
	int nimN[3] = { x,y,z };
	SortArray(nimN, 3);
	sum = nimN[0] + nimN[1];
	return sum;
}


// 2
void exchangeletter(char s[]) {
	int i = 0;
	for (; *s != '\0'; s++) {
		if (*s == 'a')
			*s = '#';
		s++;
	}

}



// 3
double Avg(int a[][3], int row) {
	double sum = 0.0;
	double cont = 0.0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[i][j] % 2) {
				sum += a[i][j];
				cont++;
			}
		}
	}

	return sum / cont;

}