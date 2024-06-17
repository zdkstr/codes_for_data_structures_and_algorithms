#include"head.h"
void ClearString(SString& S) {
    for (int i = 0;i < S.length+1;i++)
        S.ch[i] = NULL;
    S.length = 0;
}
