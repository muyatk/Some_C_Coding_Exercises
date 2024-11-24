#include "stdio.h"
#include "stdlib.h"
#pragma warning ( disable : 4996 )
#include "string.h"

// It looks like quite fine and ok but still ask Valeh about that NULL pointer and empty string issue so that you can be sure about everything nice work !!!

int CharFreq(char* input_text, char search_char) {

	//if (input_text == ' ') {

	//	return 0;
	//}

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

int main() {

	char input[] = " ";
	printf("%d\n", CharFreq(input, 'r'));

	system("pause");
}