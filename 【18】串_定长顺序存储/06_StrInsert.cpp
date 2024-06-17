#include"head.h"
//从串S的某个位置起插入字符串T
bool StrInsert(SString& S, int pos, SString T) {
    int len = S.length + T.length;
    if (len >= MAXLEN)
		return false;
	if (pos < 1 || pos > S.length + 1) 
		return false;
    int i = len - 1;
    for (int j = 0;j < S.length - pos + 1;j++, i--)
         S.ch[i] = S.ch[S.length - 1 - j];
    for (int j = 0;j < T.length;j++)
        S.ch[pos+j-1] = T.ch[j];
    S.ch[len] = '\0';
    S.length = len;
    return true;
}
