#include"head.h"
void LinkListSelectSort(LinkList L) {     //带头结点
	LNode* pmin,* p;
	LNode* pos=L->next;
	while (pos!= NULL) {
		pmin = pos;
		p = pos->next;
		while (p != NULL) {
			if (p->data < pmin->data)
				pmin = p;
			p = p->next;
		}
		if (pmin != pos) {
			LElemType temp = pos->data;
			pos->data = pmin->data;
			pmin->data = temp;
		}
		pos = pos->next;
	}
}
