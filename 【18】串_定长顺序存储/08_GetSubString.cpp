#include"head.h"
//求主串从位置pos起长度为len的子串
bool GetSubString(SString S, int pos, int len,SString& Sub ) {
    if (pos < 1 || len < 0  ||len > S.length-pos+1)
        return false;
    if (len==0) 
        Sub.length = 0;
    else {
        for (int i = 0; i < len; i++) 
            Sub.ch[i] = S.ch[pos - 1 + i];
        Sub.length = len;
        Sub.ch[len] = '\0';
    }
    return true;
}
