#include "stdlib.h"
#include "stdio.h"


// Ok it looks like completely true but again ask Valeh for being sure from everything is perfectly correct !!!

char table[5][5];

int fill() {

	int i, j;

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			if (i == j) {

				table[i][j] = '*';

			}
			else if(i < j) {

				table[i][j] = '+';

			}
			else {

				table[i][j] = '_';

			}

		}

	}

	return 0;

}

int main() {

	char T[5][5];

	fill();

	int i, j;

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			printf(" %c ", table[i][j]);




		}
		printf("\n");

	}

	return 0;
}