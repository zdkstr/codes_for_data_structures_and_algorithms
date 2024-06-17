#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MaxSize 5

typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];  // 从下标1处开始存储结点
	int node_number;
}SqBiTree;

void InitBiTree(SqBiTree &T);
void CreateBiTree(SqBiTree& T);
void PrintBiTree(SqBiTree &T);

