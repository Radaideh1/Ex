#include "9.h"


int main() {
	int arr[4][3] = {
		{1,5,3},
		{4,2,2},
		{3,5,3},
		{2,1,1}
	};


	cout << FiveAvg(arr, 4, 3) << endl;

	char p[] = "Abdullah";
	ShiftString(p);
	cout << p << endl;

	return 0;
}