#include "6.h"


int main() {


	double f;
	int z, w;
	cout << "Enter z and w here : "; cin >> z >> w;
	if (!(z % 5)) {
		f = z + 5 * (w * w);
	}
	else
		f = w / (z + 7.0);
	cout << f << endl;

	cout << "\n========================================\n";

	int m[2];

	int arr[4][2] = {
			{ 170, 55},
			{ 92, 92},
			{ 73, 130},
			{ 120, 90}
	};
	majorStatistics(arr, 4, 2, m, 2);

	cout << "\n\n========================================\n\n";
	char p[] = "Welcom. Lab 150L : final exam.";
	char q = '$';
	replaceDot(p, q);
	cout << p << endl;


	return 0;
}