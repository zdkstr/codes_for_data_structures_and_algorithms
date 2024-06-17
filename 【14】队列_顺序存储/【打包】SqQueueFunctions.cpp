//#include"head.h"
////#define MaxSize 10
////typedef int QElemType;
////typedef struct {
////	QElemType data[MaxSize];
////	int front;
////	int rear;
////}SqQueue;
////void InitQueue(SqQueue& Q);
////bool EnQueue(SqQueue& Q, QElemType e);
////bool DeQueue(SqQueue& Q, QElemType& e);
////bool QueueEmpty(SqQueue Q);
////bool QueueFull(SqQueue Q);
////bool GetHead(SqQueue Q, QElemType& e);
////int Number(SqQueue Q);
//
//void InitQueue(SqQueue& Q) {
//	Q.front = Q.rear = 0;
//}
//bool EnQueue(SqQueue& Q, QElemType e) {
//	if ((Q.rear + 1) % MaxSize == Q.front)
//		return false;
//	Q.data[Q.rear] = e;
//	Q.rear = (Q.rear + 1) % MaxSize;
//	return true;
//}
//bool DeQueue(SqQueue& Q, QElemType& e) {
//	if (Q.rear == Q.front)
//		return false;
//	e = Q.data[Q.front];
//	Q.front = (Q.front + 1) % MaxSize;
//	return true;
//}
//bool QueueEmpty(SqQueue Q) {
//	return(Q.rear == Q.front);
//}
//bool QueueFull(SqQueue Q) {
//	return((Q.rear + 1) % MaxSize == Q.front);
//}
//bool GetHead(SqQueue Q, QElemType& e) {
//	if (Q.rear == Q.front)
//		return false;
//	e = Q.data[Q.front];
//	return true;
//}
//int Number(SqQueue Q) {
//	return (Q.rear - Q.front + MaxSize) % MaxSize;
//}
