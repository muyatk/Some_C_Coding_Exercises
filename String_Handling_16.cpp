#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#pragma warning ( disable : 4996 )

char** SentenceSplit(char* pc, int* nWords) {

	if (pc == NULL) {

		return 0;

	}

	if (*(pc) == 0) {
		*nWords = 0;
		return 0;

	}

	const char* P = (char*)malloc(strlen(pc) + 1);

	//strcpy(P, pc);

	P = pc;

	// Ok I have made the modification by using those functions but some kind of things are looking very weird ask to Professor or Valeh...
	int i = 0, j, Word_L[81];

	char* token;

	char* ptr = (char*)malloc(strlen(P) + 1);

	strcpy(ptr, P);

	token = strtok(ptr, " ");

	//printf("%s\n", token);

	Word_L[i] = strlen(token);

	while (1) {

		i++;
		P = strchr(P + 1, ' ');

		if (P == NULL) {

			break;
		}

		char* ptr = (char*)malloc(strlen(P) + 1);

		strcpy(ptr, P);

		token = strtok(ptr, " ");

		//printf("%s\n", token);

		Word_L[i] = strlen(token);

	}

	*nWords = i;

	//printf("\nThe number of words : %d\n", n);

	char** ppTable;

	ppTable = (char**)malloc(i * sizeof(char*));

	for (i = 0; i < *nWords; i++) {

		*(ppTable + i) = (char*)malloc((Word_L[i] + 1) * sizeof(char));

	}

	// Fullfill the table ( Discuss here with the Professor about whether you should use those functions that are given in the question!!! Very important make its discussion !!! also with Valeh

	int L = 0;


	for (i = 0; i < *nWords; i++) {

		for (j = 0; j < Word_L[i]; j++) {

			*(*(ppTable + i) + j) = *(pc + L);

			L++;

		}

		*(*(ppTable + i) + Word_L[i]) = 0;

		L++;

	}

	return ppTable;

};

// Burdan devam edersin çok zor de?il zaten!!!

int WordExist(char** pTable, int n_words, const char* word) {

	int i, r ;

	for (i = 0; i < n_words; i++) {

		printf("The %d th word in table is : %s \n", i, *(pTable + i));
		
		const char* W = (char*)malloc(strlen(*(pTable + i)) + 1);

		W = *(pTable + i);

		r = strcmp(W, word);

		printf("%d\n", r);

	}

	return 0;
};

int main() {

	//* S;
	char str[] = "Muhammed Adil YATKIN";

	//S = str;

	int num_words, i=0;
	char** T;

	T = SentenceSplit(str, &num_words);

	//for (i = 0; i < num_words; i++) {

	//	printf("The %d th word in table is : %s \n", i, *(T + i));

	//}

	// Second Function :

	int k;
	const char* w = "Adil";

	k = WordExist(T, num_words, w);

	system("pause");

	return 0;

}