#include "stdio.h"
#include "stdlib.h"

// Görünü?te oldu gibi duruyor ama yine de bir Valeh hocaya sormak gerçekten güzel olur mutlaka dan?? olal?m:)

char *CreateRandomString(int n)
{ // n is the length of requested string. It does not include the terminating zero byte.
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	// This initialization will be discussed later. Here it is enough to know that
	// alphabet[0] gets value 'a', alphabet[1] gets value 'b', etc.
	char* pResult = (char*)malloc(n + 1);
	// Remember: the function that calls CreateRandomString must take care of
	// deleting the memory field allocated here.
	for (int i = 0; i < n; i++)
	{
		*(pResult + i) = alphabet[rand() % 26];
		// The English alphabet contains 26 characters
		// When dividing with 26, the remainder is in range 0…25
	}
	*(pResult + n) = 0; // set the terminating 0

	printf("%s\n", pResult);
	return pResult;
}

char *Reverse(char* p_in){

	int i = 0, n;
	if (p_in == 0 || *p_in == 0) {
		return 0;
	}

	while (1) {

		//printf("%c\n", p_in[i]);

		i = i + 1;

		if (p_in[i] == 0) {

			n = i;
			printf("%d\n", n);

			break;
		}
	}

	char* pReverse = (char*)malloc(n + 1);

	for (i = 0; i < n; i++) {

		*(pReverse + i) = p_in[n - 1 - i];

	}
	*(pReverse + n) = 0;

	//system("pause");

	return pReverse;
}

int main() {

	char *pc = Reverse(CreateRandomString(20));
	
	printf("%s\n", pc);

	system("pause");
	
	//printf("%c", pc[3]);
}


