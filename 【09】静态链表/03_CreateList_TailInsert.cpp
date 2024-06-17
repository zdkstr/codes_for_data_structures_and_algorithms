#include"head.h"
void CreateList_TailInsert(SLinkList L[]){
	ElemType x;int i;int tail=0;
	scanf("%d",&x);
	while(x!=9999){
		for(i=1;i<MaxSize;i++)  // 查找一个空位置，返回下标
			if(L[i].next == -2)
				break;
		if(i==MaxSize){
			printf("静态链表已满，无法插入新元素。");
			exit(0);
		}
		else{
			L[i].data=x;
			L[i].next=L[tail].next;
			L[tail].next=i;
			tail=i;
		}
		scanf("%d",&x);
	}
}
