#include "14.h"


int arr[3][3] = {
		{9,5,3},
		{4,5,2},
		{3,1,3}

};

int main() {

	Dia_Fcn(arr, 3, 3);
	char p[] = "C++ Final Exam";
	char q[30];
	MyCopy(p, q);
	cout << q << endl;
	return 0;
}