#include"head.h"
bool Push(SharedStack &S,int i, ElemType e) {
	// i=1表示s1栈，i=2表示s2栈
	if (i < 1 || i>2) {
		printf("栈号输入不对\n");
		return false;
	}
	if (S.top2 - S.top1 == 1) {
		printf("栈已满,入栈失败\n");
		return false;
	}
	switch (i) {
	case 1:
		S.data[++S.top1] = e;
		printf("s1栈入栈成功\n");
		return true;
		break;
	case 2:
		S.data[--S.top2] = e;
		printf("s2栈入栈成功\n");
		return true;
	}
	return false;
}
