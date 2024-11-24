#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "conio.h"

// Ask to Valeh about how can we return two different values from a C function it looks like this is a little complicated.

double TempConverter(double d, char c) {

	//double Far, Cel;

	if (c == 'F' || c == 'f') {

		d = (d - 32) * 5 / 9;
		c = 'C';

		//printf("\nOutput Calculation is : %f", d);

		return d;
	}
	else if (c == 'C' || c == 'c') {

		d = (d * 9) / 5 + 32;
		c = 'F';

		//printf("\nOutput Calculation is : %f", d);

		return d;
	}
	else {

		d = NAN;

		return NAN;
	}


}

int main() {

	double d;
	char c, line[81];

	gets_s(line);

	d = atof(line);

	c = _getche();

	if (isnan(TempConverter(d, c)) == 1) {

		printf("\nNo solution");

	}
	else {

		//printf("\nInput temprature and char is : %f, %c", d, c);

		//d, c = TempConverter(d, c);

		d = TempConverter(d, c);

		if (c == 'F' || c == 'f') {

			c = 'C';

		}
		else if (c == 'C' || c == 'c') {

			c = 'F';

		}

		printf("\nThe temprature is : %f %c", d, c);
	}



}
