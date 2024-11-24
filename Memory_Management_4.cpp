#include "stdlib.h"
#include "stdio.h"
#include "memory.h"
#include "string.h"

#pragma warning ( disable : 4996 )

// This code is not working only for the cases the words in the last part in the sentence focus on that and fix it !!!
// If you can not solve the problem ask to Valeh since this code already is not efficient and it should be optimized actually!!!

int RemoveName(char* pNames, char* pNameToRemove) {

	char Name[100];

	memset(Name, 0, 100);

	int i = 0, ret, j = 0;

	while (i<strlen(pNames)) {

		if (*(pNames + i) == ',' || *(pNames + i) == '\0') {

			ret = memcmp(Name, pNameToRemove, strlen(Name));

			if (ret == 0) {

				// Add here memmove for replacement
				printf("%s\n", Name);

				int l = strlen(pNames) - strlen(pNameToRemove), k = i - strlen(pNameToRemove);

				//printf("%d", strlen(pNames) - strlen(pNameToRemove));

				char* pResult = (char*)malloc(l);
				memset(pResult, 0, l);
				memmove(pResult, pNames, i - strlen(pNameToRemove));

				//printf("%d", k);

				memmove(pResult + k, pNames + k + strlen(pNameToRemove) + 1, strlen(pNames) - k - strlen(pNameToRemove) - 1);
				
				*(pResult + l) = '\0';

				//memmove(pNames + i - strlen(Name) - 1, pNames, strlen(Name));

				printf("%s\n", pResult);

				printf("%d\n", i);

				system("pause");
				return 1;

			}
			else {

				j = 0;

			}


		}
		else {

			Name[j] = *(pNames + i);
			j++;

		}
		//printf("%s\n", Name);

		i++;

	}

	system("pause");

	return 0;
};

int mail() {

	char Names[100], name[100];
	char* pNames, * pNameToRemove;

	memset(Names, 0, 100);

	printf("Enter the list of names :\n");

	scanf("%s", Names);

	pNames = Names;

	printf("Enter the name that you want to delete :\n");

	scanf("%s", name);

	pNameToRemove = name;

	RemoveName(pNames, pNameToRemove);

	return 0;

}


int main() {
	char dest[] = "John,Mary,James,Elizabeth";
	const char src[] = "John,Mary,James,Elizabeth";

	char* pResult = (char*)malloc(19);
	memset(pResult, 0, 19);

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(pResult , src, 10);
	memmove(pResult + 10, src + 16, 9);
	*(pResult + 19) = '\0';
	printf("After memmove dest = %s, src = %s\n", pResult, src);

	system("pause");

	return(0);
}

// Ok apply the above logic to inside of the function !!!







//int main() {

//	char str_1[100] = "John,Mary,James,Elizabeth", str_2[100] = "1";

//	int a = memcmp(str_1, str_2, 16);

//	printf("%d", a);


//}

//int main() {
//    char str1[32];
//    char str2[32];
//   int ret;

//    memcpy(str1, "adil,burak,recep", 16);
//    memcpy(str2, "recep", 5);

 //   ret = memcmp(str1, str2, 16);

//    if (ret > 0) {
//        printf("str2 is less than str1");
//    }
//    else if (ret < 0) {
//        printf("str1 is less than str2");
//    }
//    else {
//        printf("str1 is equal to str2");
//    }

//   system("pause");

//    return(0);
//}