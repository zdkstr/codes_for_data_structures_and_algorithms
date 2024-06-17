#include"head.h"
//模式匹配，子串T是否存在于主串S中,朴素算法
int LocateSubString_Simple(HString S, HString T) {
	int i = 0, j = 0;
	while (i < S.length && j < T.length) {
		if (S.ch[i] == T.ch[j]) {
			++i;
			++j;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == T.length)
		return (i - T.length+1);
	else
		return 0;
}
