#include"head.h"
void CreateString(HString &S,int Maxsize) {  // 自定义最大长度
	S.ch = (char*)malloc(sizeof(char) *Maxsize);
	int i = 0;
	for (char x;scanf("%c", &x) != EOF && x != '\n' && i < Maxsize - 1;i++)
		S.ch[i] = x;
	S.ch[i] = '\0';
	S.length = i;
	S.ch = (char*)realloc(S.ch, (S.length + 1) * sizeof(char));// 使用 realloc 函数重新分配堆空间
}
