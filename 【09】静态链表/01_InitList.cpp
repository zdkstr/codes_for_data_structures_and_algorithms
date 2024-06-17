#include"head.h"

void InitList(SLinkList L[]){  // 默认下标0对应空结点
	for(int i=1;i<MaxSize;i++)
		L[i].next=-2; // -2 表示结点未被使用
	L[0].next=-1;  // -1 表示下一个结点为空结点
}
