#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#pragma warning ( disable : 4996 ) 

// Ok it looks like this program works quite fine but again I think you should ask to Valeh for not missing some small important points ... and also may be your professor Viktor Leppiksen...

typedef struct Date
{
	int day;
	char month[4];
	int year;
} DATE;
typedef struct Exam
{
	const char* pSubject;
	DATE date;
	int mark;
} EXAM;

int main() {

	EXAM adil[5] =
	{
	{ "Math_101", { 10, "Oct", 2022 }, 75 },
	{ "Math_102", { 17, "Nov", 2022 }, 87 },
	{ "Math_201", { 27, "Nov", 2007 }, 83 },
	{ "Math_202", { 11, "Dec", 2007 }, 69 },
	{ "Math_232", { 5, "Dec", 2007 }, 57 }
	};

	double AverageMark = 0;
	int i;

	for (i = 0; i < 5; i++) {

		printf("%s at %d-%s-%d, mark is %d\n", adil[i].pSubject, adil[i].date.day, adil[i].date.month, adil[i].date.year, adil[i].mark);

		AverageMark = AverageMark + adil[i].mark;

	}

	AverageMark = AverageMark / i;

	printf("Average of the marks is %f", AverageMark);

	system("pause");

	return 0;
}
