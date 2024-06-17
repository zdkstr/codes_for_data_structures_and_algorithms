#include"head.h"
bool Symmetry(DLinkList L) {
	if(L==NULL)
		return false;
	DNode* p_left = L->prior;
	DNode* p_right = L->next;
	while (p_left != p_right && p_left->next != p_right) {
		if (p_left->data == p_right->data) {
			p_left = p_left->prior;
			p_right = p_right->next;
		}
		else
			return false;
	}
	return true;
}
