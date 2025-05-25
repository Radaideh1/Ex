#include "11.h"

void replaceFCN(int b[][4], int rows, int cols, int N) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (!(b[i][j] % N))
				b[i][j] = N;
		}
	}


}

void PirntExcept(const char* s) {
	char ss[100]; int i = 0;
	while (*s != '\0') {
		if (*s != 'b') {
			ss[i] = *s;
			i++;
		}
		s++;
	}
	ss[i] = '\0';
	cout << ss << endl;
}


