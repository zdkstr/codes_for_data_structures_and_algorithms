#include"head.h"
//从串S的某个位置起删除len个元素
bool StrDelete(HString& S, int pos, int len) {
	int temp=S.length - pos + 1;
	if (pos < 1 || len >temp)
		return false;
	for (int i = 0;i<temp-len;i++)
		S.ch[pos - 1 + i] = S.ch[pos-1+len+i];
	S.length = S.length - len;
	S.ch[S.length] = '\0';
	S.ch = (char*)realloc(S.ch, (S.length + 1) * sizeof(char));// 使用 realloc 函数重新分配堆空间
	return true;
}
