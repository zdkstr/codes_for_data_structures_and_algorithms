#include"head.h"
//从串S的某个位置起插入字符串T
bool StrInsert(HString& S, int pos, HString T) {
    if (pos < 1 || pos > S.length + 1) 
        return false;
    if (T.length) {  
        S.ch = (char*)realloc(S.ch, (S.length + T.length + 1) * sizeof(char));  // 使用 realloc 函数重新分配堆空间
        if(S.ch==NULL) exit(-2);
        for (int i = S.length - 1; i >= pos - 1; --i) 
            S.ch[i + T.length] = S.ch[i];
        for (int i = 0; i < T.length; i++)
            S.ch[pos-1 + i] = T.ch[i];
        S.length += T.length;
        S.ch[S.length] = '\0';
    }
    return true;
}
