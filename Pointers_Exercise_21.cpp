#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

#define error_code_negative 1
#define error_code_zero 2
#define error_code_greater_1000 3
#define error_code_pointer_zero 4
#define error_code_empty_array 5


// Ok basically it looks like worky pretty well but definitely it has to be asked to Valeh especially for the errors as 4 and 5 also it requires one more test related with the element zero inside the array !!!

int CheckSum(int *p_array, int n, int *p_error_code) {

	*p_error_code = 0;

	int i = 0, sum = 0;

	if (p_array  == NULL) {

		*p_error_code = error_code_pointer_zero;
		return 0;

	}

	if (n == 0) {

		*p_error_code = error_code_empty_array;
		return 0;

	}

	for (i = 0; i < n; i++) {

		if (*(p_array + i) < 0){

			*p_error_code = error_code_negative;
			return 0;

		}

		if (*(p_array + i) == 0){

			*p_error_code = error_code_zero;
			return 0;

		}

		if (*(p_array + i) > 1000){

			*p_error_code = error_code_greater_1000;
			return 0;

		}

		sum = sum + *(p_array + i);

	}

	return sum;

};



int* CreateRandomArray(int n, int lower, int upper)
{ // n is the length of array to be generated
// The random numbers will be in range lower….upper
// lower and upper may be negative
	if (n <= 0 || lower >= upper)
	{
		return 0;
	}
	int* pResult = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		*(pResult + i) = lower + rand() % (upper - lower + 1);
	}
	return pResult;
}

int main() {

	int error_code;

	int *Deneme, i, n = 5, s;

	Deneme = CreateRandomArray(5, 5, 9);

	for (i = 0; i < 5; i++) {

		printf("%d\n", *(Deneme + i));

	}

	s = CheckSum(Deneme, n, &error_code);

	switch (error_code) {

	case 1:

		printf("Error : 1  Some members are negative");
		break;

	case 2:

		printf("Error : 2  Some members are zero ");
		break;

	case 3:

		printf("Error : 3  Some members are greater than 1000 ");
		break;

	case 4:

		printf("Error : 4  The pointer is zero ");
		break;

	case 5:

		printf("Error : 5  The array is empty ");
		break;

	}

	printf("The summation of the pointer array is : %d\n", s);

	system("pause");

}