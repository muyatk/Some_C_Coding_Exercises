#include "stdio.h"
#include "stdlib.h"

// Awesome it works perfect also analyze that if the first character become empty space so this will have significant effect
// Ask Valeh about why we need to add 0 at the end of Buf2 ??

char Buf1[81], Buf2[81];

void arrange_copy(char X[81], char Y[81]) {

	int i = 0, j = 0;

	// For skipping first empty places....

	if (X[i] == ' ' && i == 0) {

		while (X[i] == ' ') {

			i++;

		}

	}

	while (i < 80) {

		if (X[i] == ' ') {

			
			//printf("%d\n", j);

			Y[j] = X[i];

			j++;

			while (X[i] == ' ') {

				i++;

			}

		}
		else {

			Y[j] = X[i];

			//printf("%d\n", j);
			i++;
			j++;

		}


	}

}

int main() {

	printf("Please enter first array\n :");

	gets_s(Buf1);

	//printf("Please enter second array\n :");

	//gets_s(Buf2);

	arrange_copy(Buf1, Buf2);

	printf("Text after compressing: %s \n", Buf2);

	system("pause"); // ASK this stupid thing to a Valeh Farzaliyev why we need this fucking piece of shit !!!
	return 0;
}