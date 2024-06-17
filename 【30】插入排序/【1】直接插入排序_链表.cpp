#include"head.h"
//S=O(1),平均T=O(n*n),最坏T=O(n*n),稳定;
void LinkListInsertSort(LinkList L) {      // L带头结点
	if(L->next->data==NULL) return;
	LNode* pos = L->next->next; 
	LNode* pre = L->next;
	while (pos != NULL) {   //遍历链表，将pos指向的元素逐个插入已排序列
		LNode* p = L->next; LNode* pro=L;
		while (p != pos && p->data < pos->data){  //遍历已排序列，查找pos元素的插入位置
			p = p->next; 
			pro=pro->next;
		}
		if (p->data > pos->data) { //条件成立则执行元素插入操作
			pre->next = pos->next;
			pro->next = pos;
			pos->next = p;
			pos = pre->next;
		}
		else{
			pos = pos->next;
			pre = pre->next;
		}
	}
}
