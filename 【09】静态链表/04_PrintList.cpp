#include"head.h"
void PrintList(SLinkList L[]){
	int i=L[0].next;
	if(i==-1){
		printf("链表为空");
		return;
	}
	for(;i!=-1;i=L[i].next)
		printf("%d ",L[i].data);
}
