#include "stdlib.h"
#include "stdio.h"

int main() {

	// Why I have to enter a number here I mean why I have to declare the length of the string array ask to Valeh!!!
	// Another thing is ask to Valeh that can we write this code in a much more efficient way???? !!!!
	char line[81], buf[20];

	int i=0, l, c, r, k, p = 0,  x;

	gets_s(line);

	l = sizeof(line);

	while (i < l) {

		c = line[i];

		//printf("%c\n", line[i]);

		if (c > 47 && c < 58) {

			r = i;
			break;
		}

		i = i + 1;

	}

	k = r;

	while (k < l) {

		k = k + 1;
		c = line[k];

		if (c == ' ') {

			//printf("%d", k);
			break;

		}

	}

	while (r < k) {

		buf[p] = line[r];

		//printf("%c -- %d\n", line[r], p);

		r++;
		p++;

	}
	
	buf[p+1] = '\0';

	//printf("%c", buf);

	x = atoi(buf);

	if (x % 2 == 0) {

		printf("%d is an even number\n", x);

	}
	else {

		printf("%d is an odd number\n", x);

	}

	//printf("%d is an even number\n", x);

	//printf("%d", r);

	return 0;
}