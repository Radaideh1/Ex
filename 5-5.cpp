#include "5.h"


int main() {

	int arr[4][3] = {
		{1,5,3},
		{4,2,2},
		{3,5,3},
		{2,1,1}
	};
	double m[2];
	BookRating(arr, 4, 3, m, 2);
	char r[] = "abdullah";
	replaceByDash(r, 'h');
	cout << r << endl;


	return 0;
}