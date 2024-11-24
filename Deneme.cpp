#include "stdio.h"
#include "stdlib.h"

int main() {

	//double d = 100 / 3;
	//int d = 100 / 3.0;
	//double d = 100 / 3.0;

	//int j = 100, k = 3;
	//int i = (double)j / k;
	//double d = j / (double)k;

	int i = 1, j = 1, k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);

	//system(pause);
	return i;
	system("pause");
}