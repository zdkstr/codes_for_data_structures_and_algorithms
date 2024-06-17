#include"head.h"
// 串连接：复制两个串的数据到第三个空串
bool Concat(SString& T, SString S1, SString S2) {
    int m=S1.length+S2.length;
    if (m >= MAXLEN - 1) return false;
    for (int i = 0; i < S1.length; i++)
        T.ch[i] = S1.ch[i];
    for (int i = 0; i< S2.length; i++)
        T.ch[S1.length+i] = S2.ch[i];
    T.length = S1.length + S2.length;
    T.ch[T.length] = '\0';
    return true;
}
