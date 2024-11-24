#include "stdlib.h"
#include "stdio.h"
#include "memory.h"
#pragma warning ( disable : 4996 )
#include "string.h"



#pragma warning ( disable : 4996 )


int InsertName(char* pNames, int n, char* pNameToInsert) {

	int m = strlen(pNameToInsert);
	int k = strlen(pNames);

	if ((m + k + 1) >= n) {

		return 0;

	}
	else {

		memmove(pNames + m + 1, pNames, k);
		
		//for (int i = 0; i < m; i++) {

		//	*(pNames + i) = *(pNameToInsert + i);

		//}

		memcpy(pNames, pNameToInsert, m);

		*(pNames + m) = ',';

		//*(pNames + m + k + 1) = '0';

		//printf("%s", pNames);

		//system("pause");

		return 1;

	}


};

#define n 31

int main() {


	//char* pNames = (char*)malloc(n);

	char first_names[n], second_name[n];

	memset(first_names, 0, n);

	char* pNames, * pNameToInsert;

	printf("Enter the first list of names :\n");

	scanf("%s", first_names);

	pNames = first_names;

	printf("Enter the second name :\n");

	scanf("%s", second_name);

	pNameToInsert = second_name;

	InsertName(pNames, n, pNameToInsert);

	printf("%s", first_names);

	system("pause");

	return 0;

}

//int mail()
//{
//	char str[100] = "John,Mary,James,Elizabeth", str_2[100] = "David";
//	char* first, * second;
//	first = str;
//	second = str_2;
//	printf("Original string :%s\n ", str);

	// when overlap happens then it just ignore it
//	memmove(first + strlen(second)+1, first, strlen(first));
//	printf("memcpy overlap : %s\n ", str);

	// when overlap it start from first position
	//memmove(second + 8, first, 10);
	//printf("memmove overlap : %s\n ", str);

//	*(first + 0) = *(second +0);
//	*(first + 1) = *(second + 1);
//	*(first + 2) = *(second + 2);
//	*(first + 3) = *(second + 3);
//	*(first + 4) = *(second + 4);
//	*(first + 5) = ',';

//	printf("memcpy overlap : %s\n ", str);

//	system("pause");

//	return 0;
//}

//int main() {

//	char k[20] = "adil";

//	char* t = k;

	//scanf("%s", k);

//	memmove(t + 3, t, strlen(t));

//	printf("%s", k);

//	system("pause");
//}