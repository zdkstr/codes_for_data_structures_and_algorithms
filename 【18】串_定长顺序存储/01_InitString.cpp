#include"head.h"
void InitString(SString &S) {
	for (int i = 0;i < MAXLEN;i++)
		S.ch[i] = NULL;
	S.length = 0;
}
