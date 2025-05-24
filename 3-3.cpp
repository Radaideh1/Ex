#include "3.h"





int main() {

	// 2
	int a[5] = { 1,3,45,2,0 };

	exchangeminmax(a, 5);
	for (int i : a)
		cout << i << ' ';

	cout << "\n===========\n" << endl;

	int b[4][3] = {
		{1,5,6},
		{7,3,9},
		{2,4,8},
		{5,7,3}

	};

	minnum(b, 3, 1, 4);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			cout << b[i][j] << ' ';
		cout << endl;
	}

	cout << "\n===========\n" << endl;
	const char* s = "hi students";
	nextletter(s);

	return 0;
}