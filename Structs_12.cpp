#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#pragma warning ( disable : 4996 )

typedef struct Date
{
	int day;
	char* pMonth; // full name, locates on its own memory field that must be allocated
	int year;
} DATE;
typedef struct Exam
{
	char* pSubject; // locates on its own memory field that must be allocated
	DATE date;
	int mark;
} EXAM;

int main() {

	EXAM adil[4];

	// First Date :
	adil[0].date.day = 26;
	adil[0].date.pMonth = (char*)malloc(strlen("Nov") + 1);
	strcpy(adil[0].date.pMonth, "Nov");
	adil[0].date.year = 2022;

	// Second Date :
	adil[1].date.day = 17;
	adil[1].date.pMonth = (char*)malloc(strlen("Dec") + 1);
	strcpy(adil[1].date.pMonth, "Dec");
	adil[1].date.year = 2022;

	// Third Date : 
	adil[2].date.day = 11;
	adil[2].date.pMonth = (char*)malloc(strlen("Oct") + 1);
	strcpy(adil[2].date.pMonth, "Oct");
	adil[2].date.year = 2022;

	// Forth Date : 
	adil[3].date.day = 5;
	adil[3].date.pMonth = (char*)malloc(strlen("Dec") + 1);
	strcpy(adil[3].date.pMonth, "Dec");
	adil[3].date.year = 2022;

	// Define exam subjects and their marks :
	adil[0].pSubject = (char*)malloc(strlen("Math_101") + 1);
	strcpy(adil[0].pSubject, "Math_101");
	adil[0].mark = 87;

	adil[1].pSubject = (char*)malloc(strlen("Math_102") + 1);
	strcpy(adil[1].pSubject, "Math_102");
	adil[1].mark = 76;

	adil[2].pSubject = (char*)malloc(strlen("Math_201") + 1);
	strcpy(adil[2].pSubject, "Math_201");
	adil[2].mark = 59;

	adil[3].pSubject = (char*)malloc(strlen("Math_202") + 1);
	strcpy(adil[3].pSubject, "Math_202");
	adil[3].mark = 96;

	double AverageMark = 0;
	int i;

	for (i = 0; i < 4; i++) {

		printf("%s at %d-%s-%d, mark is %d\n", adil[i].pSubject, adil[i].date.day, adil[i].date.pMonth, adil[i].date.year, adil[i].mark);

		AverageMark = AverageMark + adil[i].mark;

		free(adil[i].date.pMonth);
		free(adil[i].pSubject);
	}

	AverageMark = AverageMark / i;

	printf("The average of the all marks is : %f", AverageMark);

	system("pause");
	return 0;

}