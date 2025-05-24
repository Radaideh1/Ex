#include "H_For_Work.h"






int main() {

	// 1 
	int num;
	cout << "Enter the number here : "; cin >> num;
	if (Multipl_7(num))
		cout << "Yes this number (" << num << ") is multiple of 7" << endl;
	else
		cout << "sorry but this number (" << num << ") is not multiple of 7" << endl;

	cout << "\n=====================================\n\n";
	// 2 
	int C[5] = { 1,2,3,4,5 };
	ConvertToEven(C,5);
	for (int i : C)
		cout << i << endl;

	cout << "\n=====================================\n\n";
	// 3
	int a[4][4] = {
		{1,0,0,0},
		{0,1,0,0},
		{0,0,1,0},
		{0,0,0,1}
	};
	int size = sizeof(a) / sizeof(int);
	if (CheckIdentity(a, size)) {
		cout << "True" << endl;
	}
	else
		cout << "False" << endl;

	cout << "\n=====================================\n\n";
	const char* p = "Hellow,How are you ? I am Fine I have C++ Exam!!";
	cout << PunctuationMarksCount(p) << endl;

	return 0;
}
