#include"head.h"
bool ListInsert(DLinkList L,int i,ElemType e){ 
	if (i < 1||L==NULL)  // 处理非法输入
		return false;
	if(i==1){
		DNode* pnew = (DNode*)malloc(sizeof(DNode));
		pnew->data = e;
		pnew->next = L->next;
		pnew->prior=L;
		L->next=pnew;
		pnew->next->prior=pnew;
		return true;
	}
	DNode* pre = L->next;
	for (int pos = 1;pre != L && pos < i-1;pos++)
		pre = pre->next;
	if (pre == L)
		return false;
	else{
		DNode* pnew = (DNode*)malloc(sizeof(DNode));
		pnew->data = e;
		pnew->next = pre->next;
		pnew->prior=pre;
		pre->next = pnew;
		pnew->next->prior=pnew;
		return true;
	}
}
