#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "conio.h"

// It has passed almost all cases but still ask to Valeh Hodja may be you are still missing something in there for just being sure !!!
// Ask to Valeh again about your solution because in the slayts professor is suggesting another apporach for solution so just become sure about that your also works well and fine

char Buf[81];

char vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };

int Counter(char input_text[81], char condition) {

	int l, i = 0, j, v_num = 0, c_num = 0, k;

	while (i < 80) {

		k = tolower(input_text[i]);

		if (k >= 97 && k <= 122) {

			//printf("%c\n", k);

			c_num++;

		}

		j = 0;

		while (j < 6) {

			if (tolower(input_text[i]) == vowels[j]) {

				v_num++;

			}

			j++;


		}

		i++;

	}

	if (condition == 'c') {

		return c_num - v_num;

	}
	else if (condition == 'v') {

		return v_num;
	}
	//else if (condition == 'x') {

	//	return exit(EXIT_SUCCESS);;
	//}
	//else {

	//	return 0;

	//}

}

int main() {

	int n;

	while (1) {

		printf("\nv  count vowels\n");
		printf("c  count consonants\n");
		printf("x  exit\n\n");

		char c = _getche();

		if (tolower(c) == 'x') {

			return exit(EXIT_SUCCESS);

		}
		else if (tolower(c) == 'c' || tolower(c) == 'v') {

			printf("\nType input sentence :\n\n");

			gets_s(Buf);

			n = Counter(Buf, tolower(c));

			printf(" %d\n ", n);

		}
		else {

			continue;
		}

	}

}