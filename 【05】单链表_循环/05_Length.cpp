#include"head.h"
int Length(LinkList L){
	if(L!=NULL)
		return L->data;
	else
		return -1;
}
