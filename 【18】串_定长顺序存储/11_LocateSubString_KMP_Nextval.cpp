#include"head.h"
void GetNextval(SString T, int nextval[]) {
	int i = 0, j = -1;
	nextval[0] = -1;
	while (i < T.length - 1) {
		if (j == -1 || T.ch[i] == T.ch[j]) {
			++i;++j;
			if (T.ch[i] != T.ch[j])
				nextval[i] = j;
			else
				nextval[i] = nextval[j];
		}
		else
			j = nextval[j];
	}
}
int LocateSubString_KMP_Nextval(SString S, SString T) {
	int* nextval = (int*)malloc(sizeof(int) * T.length);
	GetNextval(T, nextval);
	int i = 0, j = 0;
	for (;i < S.length && j < T.length;) {
		if (j == -1 || S.ch[i] == T.ch[j]) {
			i++;j++;
		}
		else {
			j = nextval[j];
		}
	}
	if (j == T.length)
		return i - T.length + 1;
	else
		return 0;
}
