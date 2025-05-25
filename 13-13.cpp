#include "13.h"



double AvgFCN(int arr[][3], int row, int col) {
	double sum = 0, ave;
	for (int i = 0; i < row; i++) {
		sum += arr[i][3];
	}
	ave = sum / 3;

	return ave;

}

bool findE(const char ch[]) {

	while (*ch != '\0') {
		if (*ch == 'E')
			return true;
		ch++;
	}
	return false;
}
bool findX(const char ch[]) {

	while (*ch != '\0') {
		if (*ch == 'x')
			return true;
		ch++;
	}
	return false;
}

bool MyFcn(const char* s) {

	if (findE(s) && findX(s))
		return true;
	else
		return false;

}