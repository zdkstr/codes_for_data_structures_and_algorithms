#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MaxSize 10  // 最大结点数量

void InitUFSets(int UFSets[]);
void CreateUFSets(int UFSets[]);
int FindRoot(int UFSets[],int x);
void Union(int fa[], int x, int y);
