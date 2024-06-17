#include"head.h"
void CreateString(SString &S) {
	int i = 0;
	for (char x;scanf("%c", &x) != EOF && x != '\n'&&i<MAXLEN-1;i++) 
		S.ch[i] = x;
	S.ch[i] = '\0';
	S.length = i;
}
