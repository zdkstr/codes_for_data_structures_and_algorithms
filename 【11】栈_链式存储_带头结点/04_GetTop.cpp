#include"head.h"
bool GetTop(LinkStack S,ElemType &e) {
	if (S->next == NULL)
		return false;
	e = S->next->data;
	return true;
}
