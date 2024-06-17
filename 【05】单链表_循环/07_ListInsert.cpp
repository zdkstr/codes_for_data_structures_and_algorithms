#include"head.h"
bool ListInsert(LinkList &L,int i,ElemType e){  // 在线性表的位置i插入值为e的元素
	if(i<1) return false; // 处理非法输入
	LNode *pre=L;
	int sub;
	for(sub=0;sub<i-1&&pre->next!=L;sub++)
		pre=pre->next;
	if(sub==i-1){
		LNode *pnew=(LNode*)malloc(sizeof(LNode));
		pnew->data=e;
		pnew->next=pre->next;
		pre->next=pnew;
		L->data+=1;
		return true;
	}
	return false;
}
