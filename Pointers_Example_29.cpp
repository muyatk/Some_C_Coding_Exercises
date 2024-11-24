#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

#pragma warning ( disable : 4996 )

// This code definitely need to be asked to Valeh because it looks very complicated most probably there has to be a way to write it much more easily short and beatiful way....

char* CreateRandomSentence(int nWords, int n1, ...)
{ // this code is out of scope of this course.
// #include "stdarg.h" is needed
// nWords is the number of words, it is followed by sequence specifying the word lengths
// nWords may be any positive number
	va_list indic;
	va_start(indic, nWords);
	int nChars = 0, j = 0;
	for (int i = 0; i < nWords; i++, nChars += va_arg(indic, int) + 1);
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char* pResult = (char*)malloc(nChars);
	va_start(indic, nWords);
	for (int i = 0; i < nWords; i++)
	{
		int nWord = va_arg(indic, int);
		for (int k = 0; k < nWord; k++, *(pResult + j++) = alphabet[rand() % 26]);
		*(pResult + j++) = ' ';
	}
	*(pResult + nChars - 1) = 0;
	return pResult;
}

char **SentenceSplit(char *pc, int *nWords) {

	if (pc == NULL) {

		return 0;

	}

	if (*(pc) == 0) {
		*nWords = 0;
		return 0;

	}

	// Ok I got the point what we need to do that firstly calculate the number of words then write the lengths inside the pointer nWords then make the rest process

	int i = 0, n = 0, q = 0,j, word_L[81];

	while (1) {

		if (*(pc + i) == ' ') {

			word_L[n] = q;
			//printf("\nThe word length : %d\n", q);
			//printf("\n");
			n++;
			q = 0;

		}
		else {

			//printf("%c", *(pc + i));
			q++;

		}

		i = i + 1;

		if (*(pc + i) == 0) {

			word_L[n] = q;
			//printf("\nThe word length : %d\n", q);
			n++;
			break;

		}

	}

	*nWords = n;

	//printf("\nThe number of words : %d\n", n);

	char **ppTable;

	ppTable = (char**)malloc(n * sizeof(char*));

	for (i = 0; i < n; i++) {

		*(ppTable + i) = (char*)malloc((word_L[i] + 1) *sizeof(char));

	}

	// Fullfill the table

	int L = 0;
	

	for (i = 0; i < n; i++) {

		for (j = 0; j < word_L[i]; j++) {

			*(*(ppTable + i) + j) = *(pc + L);

			L++;

		}

		*(*(ppTable + i) + word_L[i]) = 0;

		L++;

	}

	return ppTable;

};

int main() {

	int nWords, i;
	char *p = CreateRandomSentence(7, 3, 4, 6, 1, 2, 5, 6);
	char **T;

	//printf("%s\n", p);

	T = SentenceSplit(p, &nWords);

	//printf("\n%s\n", *(T + 1));

	for (i = 0; i < nWords; i++) {

		printf("The %d th word in table is : %s \n",i, *(T + i));

	}

	system("pause");

}