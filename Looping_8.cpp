#include "conio.h"
#include "stdlib.h"
#include "stdio.h"

int main() {

	//char c = _getche();

	char text[4], c;

	int i, l, esc;

	i = 0;

	l = sizeof(text);

	while (i < l - 1) {

		c = _getche();

		//if (int text[i] == 97) {

		//	printf("Warning!!!");

		//}

		//text[i] = c;

		// Note!!!: Ask to Valeh about why first letter "R" doesnt print out !!!

		esc = c;

		if (esc == 27) {


			text[i] = '\0';

			printf("\nResult is: %s\n", text);
			exit(EXIT_SUCCESS);
		}

		text[i] = c;

		i = i + 1;

		if (i == l - 1) {

			text[i] = '\0';

		}

	}

	//text[20] = "\0";

	printf("\nResult is: %s\n", text);

	return 0;
}