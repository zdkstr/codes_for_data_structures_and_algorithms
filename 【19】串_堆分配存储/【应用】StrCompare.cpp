#include"head.h"
int StrCompare(HString S, HString T) {
    for (int i = 0; i < S.length && i < T.length; ++i)
        if (S.ch[i] != T.ch[i])
            return S.ch[i] - T.ch[i];
    return S.length - T.length;
}

void PrintResult(int result){
	if (result == 0) {
		printf("两个字符串相等\n");
	} else if (result < 0) {
		printf("第一个字符串小于第二个字符串\n");
	} else {
		printf("第一个字符串大于第二个字符串\n");
	}
}
