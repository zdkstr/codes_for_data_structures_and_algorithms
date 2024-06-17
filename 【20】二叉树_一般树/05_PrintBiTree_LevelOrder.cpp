#include"head.h"
void LevelOrder(BiTree T) { 
	if (T == NULL)
		return;
	BiTNode* Q[50];  // 自定义一个简易的队列Q实现层次遍历
	int front = 0, rear = 0;
	Q[rear++] = T;
	while (front != rear) {
		putchar(Q[front]->data);
		if (Q[front]->lchild != NULL)
			Q[rear++] = Q[front]->lchild;
		if (Q[front]->rchild != NULL)
			Q[rear++] = Q[front]->rchild;
		front++;
	}
	putchar('\n');
}

//void LevelOrder(BiTree T) {  // 使用已有的队列工具实现层次遍历
//	if (T == NULL)
//		return;
//	BiTNode* p = T;
//	LinkQueue Q;
//	InitQueue(Q);
//	EnQueue(Q,p);
//	while (!QueueEmpty(Q)) {
//		DeQueue(Q, p);
//		putchar(p->data);
//		if (p->lchild != NULL)
//			EnQueue(Q, p->lchild);
//		if (p->rchild != NULL)
//			EnQueue(Q, p->rchild);
//	}
//}

