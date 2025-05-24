#include "2.h"



int main() {
	
	
	
	// 2
	/*int a[5] = { 5,10,11,20,3 };
	cout << FindSumOf5Multiples(a,5);*/

	cout << "\n\n============================\n\n";

	// 3
	/*const int rows = 4;
	const int cols = 4;
	int a[rows][cols] = {
		{1,5,6,9},
		{7,3,9,5},
		{2,4,8,6},
		{5,7,7,3}
			
	};
	cout << "The sum of diagonal elements : " << sumDigonal(a, rows, cols) << endl;*/

	cout << "\n\n============================\n\n";

	const char a[] = "Today is 24/5";
	char r[10];
	SeperateNumbers(a,r);
	cout << r << endl;
	

	return 0;
}