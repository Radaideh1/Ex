#include "5.h"


void BookRating(int n[][3], const int rows, const int cols, double m[], const int size) {

	double aver = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			aver += n[i][j];
		}
	}
	aver /= static_cast<double>(rows * cols);
	m[0] = aver;

	double x[3] = { 0,0,0 };
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			x[i] += n[j][i];
		}
	}
	if (x[0] < x[1] && x[0] < x[2])
		m[1] = 0;
	else if (x[1] < x[0] && x[1] < x[2])
		m[1] = 1;
	else if (x[2] < x[0] && x[2] < x[1])
		m[1] = 2;
}



bool isVowel(char c) {
	// تحقق إن الحرف حرف علة (صغير أو كبير)
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void replaceByDash(char* p, char q) {
	if (!isVowel(q)) {
		return; // إذا ما كان حرف علة، ما نعمل شيء
	}

	while (*p != '\0') {
		if (*p == q) {
			*p = '_'; // بدل الحرف
		}
		p++; // move to next character
	}
}