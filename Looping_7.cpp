#include "stdio.h"
#include "stdlib.h"

int main() {

	char line[80], m ;

	char vowels[] = { 'a','e','i','o','u','y' };

	int i = 0, j = 0, l, v, counter = 0, dn;

	//vowels[0] = "a";

	//char arr[] = { 'a','2','3','4','5' };

	l = sizeof(line);
	v = sizeof(vowels);

	gets_s(line);

	while (i < l) {

		j = 0;

		while (j < v) {

			//printf("%d -- %d\n",i ,j);


			if (line[i] == vowels[j]) {

				//printf("%c", vowels[j]);

				counter = counter + 1;

			}

			j = j + 1;

			//printf("%d\n", j);

		}

		i = i + 1;

		//printf("%d\n", i);

	}

	printf("%d", counter);

	return 0;
}