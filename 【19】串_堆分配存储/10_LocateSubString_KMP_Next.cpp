#include"head.h"
void GetNext(HString T, int next[]) {
	int i = 0, j = -1;
	next[0] = -1;
	while (i < T.length-1) {
		if (j == -1 || T.ch[i] == T.ch[j]) {
			++i;++j;
			next[i] = j;
		}
		else
			j = next[j];
	}
}
int LocateSubString_KMP_Next(HString S, HString T) {
	int* next = (int*)malloc(sizeof(int) * T.length);
	GetNext(T, next);
	int i = 0, j = 0;
	for (;i < S.length && j < T.length;) {
		if (j == -1 || S.ch[i] == T.ch[j]) {
			i++;j++;
		}
		else {
			j = next[j];
		}
	}
	if (j == T.length)
		return i - T.length+1;
	else
		return 0;
}
