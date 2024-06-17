#include"head.h"
//从串S的某个位置起删除len个元素
bool StrDelete(SString& S, int pos, int len) {
	int temp=S.length - pos + 1;
    if (pos < 1 || len >temp)
        return false;
    for (int i = 0;i<temp-len;i++)
        S.ch[pos - 1 + i] = S.ch[pos-1+len+i];
    S.length = S.length - len;
    S.ch[S.length] = '\0';
    return true;
}
