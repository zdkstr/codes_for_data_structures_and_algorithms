#include"head.h"
bool GetTop(LinkStack S,ElemType &e) {
	if (S == NULL)
		return false;
	e = S->data;
	return true;
}
