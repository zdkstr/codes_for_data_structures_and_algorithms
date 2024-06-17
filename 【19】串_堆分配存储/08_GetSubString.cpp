#include"head.h"
//从串S的某个位置起查找len个元素
int GetSubString(HString S, int pos, int len,HString& Sub) {
    if (pos < 1 || len < 0  ||len > S.length-pos+1)
        return 0;
    if (Sub.ch) 
		free(Sub.ch);
    if (!len) {
        Sub.ch = NULL;
        Sub.length = 0;
    }
    else {
        Sub.ch = (char*)malloc((len+1) * sizeof(char));
        for (int i = 0; i < len; i++) {
            Sub.ch[i] = S.ch[pos - 1 + i];
            Sub.length = len;
        }
        Sub.ch[len] = '\0';
        return 1;
    }
    return 1;
}
