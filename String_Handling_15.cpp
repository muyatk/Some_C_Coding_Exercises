#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "string.h"

#pragma warning ( disable : 4996 )

// This is very important an example code you should integrate this to that question example !!!:)

int mail() {

	const char* P = "Muhammed Adil YATKIN";

	char* token;

	int i = 0, Word_L[81];

	char* ptr = (char*)malloc(strlen(P) + 1);

	strcpy(ptr, P);

	token = strtok(ptr, " ");

	printf("%s\n", token);

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

		printf("%s\n", token);

		Word_L[i] = strlen(token);

	}

	printf("%d", Word_L[2]);

	system("pause");

	return i;
}