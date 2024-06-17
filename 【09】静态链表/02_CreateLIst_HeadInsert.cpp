#include"head.h"
void CreateList_HeadInsert(SLinkList L[]){
	ElemType x;int i;
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
			L[i].next=L[0].next;
			L[0].next=i;
		}
		scanf("%d",&x);
	}
}
