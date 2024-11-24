#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"

// This also looks quite ok but still ask to Valeh about his opinion since he can still offer a lot better method

char* CreateRandomName(int n1, int n2)
{ // n1 – length of given name, n2 – length of family name
	if (n1 <= 0 || n2 <= 0)
	{
		return 0;
	}
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char* pResult = (char*)malloc(n1 + n2 + 2); // names + space + terminating 0
	for (int i = 0; i < n1; i++)
	{
		*(pResult + i) = alphabet[rand() % 26]; // given name
	}
	*pResult = toupper(*pResult); // must start with uppercase letter
	*(pResult + n1) = ' ';
	for (int i = 0; i < n2; i++)
	{
		*(pResult + n1 + 1 + i) = alphabet[rand() % 26]; // family name
	}
	*(pResult + n1 + 1) = toupper(*(pResult + n1 + 1)); // must start with uppercase letter
	*(pResult + n1 + n2 + 1) = 0; // terminating zero
	return pResult;
}

char* ReformatName(char *input_name) {

	int i = 0, j = 0, n1, n2;

	//char* Reformatted_name;

	if (input_name == 0) {

		printf("Input pointer is zero\n");
		return 0;

	}

	while (1) {

		if (*(input_name + i) == ' ') {

			n1 = i;

		}


		if (*(input_name + i) == 0) {

			//printf("%d\n", i);
			break;

		}

		i = i + 1;

	}

	//printf("n1 is : %d n2 is : %d\n", n1, i - n1 -1);

	n2 = i - n1 - 1;

	char* Reformatted_name = (char*)malloc(n1 + n2 + 2);

	for (j = 0; j < i; j++) {
		

		if (j < n2) {

			*(Reformatted_name + j) = *(input_name + j + n1 + 1);

		}

		//*(Reformatted_name + n2) = '';

		if (j > n2) {

			*(Reformatted_name + j) = *(input_name + j - n2 - 1);

		}

	}

	*(Reformatted_name + n2) = ' ';

	*(Reformatted_name + i) = 0;

	return Reformatted_name;
};

int main() {

	int k;

	char* Deneme;

	Deneme = CreateRandomName(7, 2);

	printf("%s\n", Deneme);

	Deneme = ReformatName(Deneme);

	printf("%s\n", Deneme);
	
	system("pause");

}
