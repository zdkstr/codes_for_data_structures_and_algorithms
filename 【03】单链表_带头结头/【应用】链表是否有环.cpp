#include"head.h"
LNode* FindLoopStart(LNode* L) {
	LNode* p_fast = L, * p_slow = L;
	while (p_fast != NULL && p_fast->next != NULL) {
		p_slow = p_slow->next;
		p_fast = p_fast->next->next;
		if (p_slow == p_fast)
			break;
	}
	if (p_fast == NULL || p_fast->next == NULL)
		return NULL;
	LNode* p_start=L, * p_meet=p_slow;
	while (p_start != p_meet) {
		p_start = p_start->next;
		p_meet = p_meet->next;
	}
	LNode* p_loopstart = p_meet;
	return p_loopstart;
}