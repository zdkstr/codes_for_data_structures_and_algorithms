#include"head.h"
void DestroyStack(LinkStack& S) {
	SNode* p= S;
	while (p != NULL) {
		S = S->next;
		free(p);
		p = S;
	}
}
