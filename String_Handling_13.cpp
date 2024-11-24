#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#pragma warning ( disable : 4996 )

// Basically the program works but still ask to Valeh especially for the cases which are : The function must not crash if the input pointer is null or points to an empty string. In
//those cases the output value must be 0.

int CharFreq(char* input_text, char search_char) {

	if (input_text == NULL) {

		return 0;
	}

	char* p;

	int i = 0;

	p = strchr(input_text, search_char);

	while (p != NULL) {

		i++;

		p = strchr(p + 1, search_char);

	}

	return i;
};

int* CharFreqs(char *S) {

	int L;
	int* Freq;
	char c;

	L = strlen(S);

	// The alphabet size in english : 26
	Freq = (int*)malloc(26 * sizeof(int));


	for (int i = 0; i < L; i++) {

		*(S + i) = tolower(*(S + i));

	}
	
	printf("%s\n", S);

	int j = 0, f;

	for (c = 'a'; c <= 'z'; ++c) {

		f = CharFreq(S, c);

		//printf("%c  %d\n", c, f);

		*(Freq + j) = f;

		j++;

	}


	return Freq;

	//return L;
};




int main() {

char A[81] = "MehmetALIYATKIN", c;

int *p, i = 0 ;

p = CharFreqs(A);

for (c = 'a'; c <= 'z'; ++c) {

	printf("%c -- %d\n",c, *(p + i));

	i++;

}

system("pause");

return 0;


}