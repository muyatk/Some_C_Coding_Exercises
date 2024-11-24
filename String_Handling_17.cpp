#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "memory.h"

#pragma warning ( disable : 4996 )

// It looks like fine but still some kind of things are not crazy obvious it is good to discuss with Valeh and the Professor especially does it cover all the cases ??? That part is not crazy obvious.

int WordSearch(char * S, const char * W) {

	int i = 0;
	const char* ret;

	if (S == NULL) {

		return 0;

	}

	if (S == 0) {

		return 0;

	}

	if (W == NULL) {

		return 0;

	}

	if (W == 0) {

		return 0;

	}


	// First Word Case:
	char* pFirst = (char*)malloc(strlen(W));
	strncpy(pFirst, S, strlen(W));
	*(pFirst + strlen(W)) = '\0';

	ret = strstr(pFirst, W);

	if (ret != NULL) {

		i++;

	}

	if (strlen(S) - strlen(W) == 0) {

		return i;

	}

	// Last Word Case:
	char* pLast = (char*)malloc(strlen(W));
	strncpy(pLast, S + strlen(S) - strlen(W), strlen(W));
	*(pLast + strlen(W)) = '\0';

	ret = strstr(pLast, W);

	if (ret != NULL) {

		i++;

	}

	// Middle Words Case:
	char* pWord = (char*)malloc(strlen(W)+2);
	memset(pWord,' ', strlen(W) + 2);
	strncpy(pWord + 1, W, strlen(W));
	*(pWord + 2 + strlen(W)) = '\0';

	ret = strstr(S, pWord);

	if (ret != NULL) {

		i++;

	}
	else {

		return i;

	}

	while (1) {

		ret = strstr(ret + strlen(pWord) - 1, pWord);
		
		if (ret == NULL) {

			break;

		}
		else {

			i++;

		}
		

	}

	return i;
};

int main() {
	char haystack[100] = "and";
	const char needle[10] = "and";
	const char* ret;

	int k;

	k = WordSearch(haystack, needle);

	printf("%d\n", k);

	system("pause");

	return(0);
}