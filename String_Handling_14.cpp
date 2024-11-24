#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#pragma warning ( disable : 4996 )

// As general question finished but again exceptional cases are creating problem. Ask that to professor or Valeh especially in the cases where you enter a complete empty strings.

int WordFreq(char* S) {

	char* ptr;

	int i = 0;

	if (*S == '\0') {

		return 0;

	}

	if (*S == NULL) {

		return 0;
	}

	i++;

	ptr = strchr(S, ' ');

	//printf("%s\n", ptr + 1);

	if (ptr == NULL) {

		return i;

	}

	while (1) {

		i++;
		ptr = strchr(ptr + 1, ' ');

		if (ptr == NULL) {

			break;

		}

		//printf("%s -- %d\n", ptr + 1, i);

	}

	return i;

};

int main() {

	char str[81] = "";

	int a;

	a = WordFreq(str);

	printf("%d\n", a);

	system("pause");
}