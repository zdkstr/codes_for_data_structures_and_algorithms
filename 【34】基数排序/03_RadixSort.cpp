#include"head.h"
void RadixSort(LinkList &L){
	// 根据基数r设置接收队列的数量
	LinkQueue Q[radix];
	for(int i=0;i<radix;i++){
		Q[i].front=NULL;
		Q[i].rear=NULL;
	}
	
	// 根据位数进行n趟分配
	for(int j=1;j<=n_distributions;j++){
		
		// 分配链表中的元素到队列中
		LNode* p=L->next;
		while(p != NULL){
			L->next=p->next;
			int data=p->data;
			
			for(int i=1;i<j;i++)      // 从数据的某一位取值，低位优先
				data/=radix;
			int subkey = data % radix; 
			
			if(Q[subkey].front==NULL){
				Q[subkey].front=Q[subkey].rear=p;
			}
			else{
				Q[subkey].rear->next=p;
				Q[subkey].rear=p;
			}
			p->next=NULL;
			p=L->next;
		}
		
		
		// 收集队列中的元素到链表中
		LNode* ptail;
		for(int i=0;i<radix;i++){
			while(Q[i].front!=NULL){
				if(L->next==NULL)
					L->next=Q[i].front;
				else
					ptail->next=Q[i].front;
				ptail=Q[i].rear;
				Q[i].front=NULL;
				Q[i].rear=NULL;
			}
		}
	}
	putchar('\n');
}
