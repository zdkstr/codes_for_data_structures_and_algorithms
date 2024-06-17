#include"head.h"
void PrintString(HString S) {
	for (int i = 0;i < S.length;i++)
		putchar(S.ch[i]);
	putchar('\n');
}
