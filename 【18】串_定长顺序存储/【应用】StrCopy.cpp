#include"head.h"
//串复制，将串T的数据复制到空串S
bool StrCopy(SString& S, SString T) {
	int i = T.length;
	if (i == 0)	S.length = 0;
	else if (i >= MAXLEN) return false;
	else {
		for (int j = 0;j < i;++j)
			S.ch[j] = T.ch[j];
		S.length = i;
		S.ch[i] = '\0';
	}
	return true;
}
