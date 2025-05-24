#include "4.h"



int main() {
	// 1
	int x, y, z;
	cout << "Enter x and y and z here : "; cin >> x >> y >> z;
	cout << minsum(x, y, z) << endl;

	cout << "\n\n================================\n\n";
	// 2
	char a[] = "abdullh abdullah";
	exchangeletter(a);
	cout << a << endl;



	cout << "\n\n================================\n\n";
	// 3
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}

	};
	cout << Avg(arr, 3) << endl;


	return 0;
}