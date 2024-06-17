#include"head.h"
bool Pop(SharedStack &S, int i, ElemType& x) {
	if (i < 1 || i>2) {
		printf("栈号输入不对\n");
		return false;
	}
	switch (i) {
		case 1:
			if (S.top1 == -1) {
				printf("s1栈已空，出栈失败\n");
				return false;
			}
			else {
				x = S.data[S.top1--];
				printf("s1栈出栈成功\n");
				return true;
			}
			break;
		case 2:
			if (S.top2 == MaxSize) {
				printf("s2栈已空，出栈失败\n");
				return false;
			}
			else {
				x = S.data[S.top2++];
				printf("s2栈出栈成功\n");
				return true;
			}
			break;
	}
	return false;
}
