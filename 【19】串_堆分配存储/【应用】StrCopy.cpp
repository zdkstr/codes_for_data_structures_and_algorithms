#include"head.h"
//串复制，将串S的数据复制到空串T
int StrCopy(HString& T, HString S) {
	if(T.ch!=NULL) free(T.ch);
    if (!(T.ch = (char*)malloc((S.length+1) * sizeof(char))))
        exit(-2);
    for (int i = 0;i < S.length;i++)
		T.ch[i] = S.ch[i];
	T.ch[S.length]='\0';
    T.length = S.length;
    return 1;
}
