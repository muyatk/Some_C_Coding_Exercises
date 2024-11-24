#include "stdlib.h"
#include "stdio.h"

// Wooooow!!!! one time I have just written and it immediately start to work:):)........

int MaxOfThree(int a, int b, int c) {

	int max_number;

	if (a >= b) {

		if (a >= c) {

			max_number = a;

		}
		else{

			max_number = c;

		}

	}
	else {

		if (b <= c) {

			max_number = c;

		}
		else {

			max_number = b;

		}

	}

	return max_number;
}


int main() {

	int x, y, z, max_num;

	char line[81];

	printf("Enter first number :\n");

	gets_s(line);

	x = atoi(line);

	printf("Enter second number :\n");

	gets_s(line);

	y = atoi(line);

	printf("Enter third number :\n");

	gets_s(line);

	z = atoi(line);

	max_num = MaxOfThree(x, y, z);

	printf("The maximum number is : %d", max_num);

}