#include"head.h"
//S=O(1);平均T=O(n^2);最坏T=O(n^2);稳定;
void LinkListBubbleSort(LinkList L) {
	LNode* pos = NULL;    //pos指向已排序列的第一个元素
	LNode* p = L->next;  
	if (p == NULL)
		return;
	LElemType temp;
	while (pos != L->next) {//从前往后冒泡
		p = L->next;
		while (p->next != pos) {  //遍历pos所指元素之前的未排序列，将最大值移动到pos之前
			if (p->data > p->next->data) {
				temp = p->data;
				p->data = p->next->data;
				p->next->data = temp;
			}
			p = p->next;
		}
		pos = p;
	}
}
