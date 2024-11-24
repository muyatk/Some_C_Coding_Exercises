#define ESC 27
#include "stdlib.h"
#include "stdio.h"
#include "conio.h"

// Bu kısmı sor Valehe acaba neden çalışmıyor. Tabii çalışmaz mal mısın adam gibi odaklansana !!!

// First Version

//int main() {

//	char line[40];
//	int i = 0;

//	while (i < 40) {

//		if ((line[i++] = _getche()) == ESC) {

//			break;

//		}

//		if ((line[i++] = _getche()) == ESC) // not line[++i]
//			break;

//	}




//}

// Second Version


//int main() {

//	char line[40];
//	int i = 0;
//	while (i < 40)
//	{
//		char c = _getche();
//		if (c == ESC)
//			break;
//		line[i] = c;
//		i = i + 1;
//	}

//}


// Third Version

//char line[40];
//int i = 0;
//while (i < 40 && (line[i] = _getche()) != ESC)
//	i++;

// Shortest Version

//char line[40];
//int i = 0;
//while (i < 40 && (line[i++] = _getche()) != ESC);
