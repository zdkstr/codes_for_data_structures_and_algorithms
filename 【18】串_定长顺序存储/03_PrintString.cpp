#include"head.h"
void PrintString(SString S) {
	for (int i = 0;i < S.length;i++)
		printf("%c",S.ch[i]);
	putchar('\n');
}
