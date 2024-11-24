#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#define success 0
#define parameter_too_large 1
#define parameter_too_small 2

int RandVal[100];
int error = success;

int GetRandArray(int d) {

	int i, sum = 0;
	double average;

	if (d <= 0) {

		error = parameter_too_small;
		return 0;

	}
	else if (d > 100) {

		error = parameter_too_large;
		return 0;

	}
	else {

		for (i = 0; i < d; i++) {

			RandVal[i] = rand();

			printf("random number %d is : %d \n", i, RandVal[i]);

			sum = sum + RandVal[i];

		}

		average = sum / d;

		return average;

	}

}


int main() {

	char line[80];
	int x;
	double avg;

	gets_s(line);

	x = atoi(line);

	if (error != success) {

		if (error == parameter_too_large) {

			printf("Parameter value is too large");

		}
		else if (error == parameter_too_small) {

			printf("Parameter value is too small");

		}

	}
	else {

		avg = GetRandArray(x);

		printf("The average value of numbers is : %.2f", avg);

	}

}


// Note : Görünüşe göre herşey çok iyi çalışıyor ancak gene de bir Valeh hocaya sorsak süper olur esasında !!!