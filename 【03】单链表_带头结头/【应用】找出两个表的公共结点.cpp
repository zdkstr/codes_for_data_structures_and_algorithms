#include"head.h"
LNode* SearchCommonPoint(LinkList L1, LinkList L2) {
	int len1 = Length(L1), len2 = Length(L2);
	LNode* plong, * pshort;
	int dist;
	if (len1 > len2) {
		plong = L1->next, pshort = L2->next;
		dist = len1 - len2;
	}
	else {
		plong = L2->next, pshort = L1->next;
		dist = len2 - len1;
	}
	while (dist != 0) {
		plong = plong->next;
		dist--;
	}
	while (plong != NULL) {
		if (plong == pshort)
			return plong;
		else {
			plong = plong->next;
			pshort = pshort->next;
		}
	}
	return NULL;
}