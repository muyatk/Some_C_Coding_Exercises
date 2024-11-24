#include "stdlib.h"
#include "stdio.h"
#include "conio.h"

int main() {

	int counters[6] = {0}, i, j, v;

	char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' }, c;

	v = sizeof(vowels);

	while (1) {

		c = _getche();

		i = 0;

		while (i < v) {

			if (vowels[i] == c) {

				counters[i]++;
				//printf("%c\n", c);
				//printf("%c\n", vowels[i]);

			}


			if (c == '\r') {

				j = 0;

				while (j < v) {

					printf("%c: %d\n", vowels[j], counters[j]);

					j = j + 1;

				}

				exit(EXIT_SUCCESS);
				break;

			}

			i = i + 1;

		}

		//j = 0;

		//while (i < v) {

		//	printf("%c: %d\n", vowels[i], counters[i]);
		//	i = i + 1;

		//}

	}
	return 0;
}