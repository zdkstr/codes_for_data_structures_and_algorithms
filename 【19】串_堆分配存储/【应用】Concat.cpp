#include"head.h"
// 串连接,将串S1和串S2的数据拼接到空串T
int Concat(HString& T, HString S1, HString S2) {
    if (T.ch) free(T.ch);
    T.ch = (char*)malloc((S1.length + S2.length+1) * sizeof(char));
    if(T.ch==NULL) exit(-2);
    for (int i = 0; i < S1.length; i++)
        T.ch[i] = S1.ch[i];
    for (int j = 0; j < S2.length; j++)
        T.ch[S1.length+j] = S2.ch[j];
    T.length = S1.length + S2.length;
    T.ch[T.length] = '\0';
    return 1;
}
