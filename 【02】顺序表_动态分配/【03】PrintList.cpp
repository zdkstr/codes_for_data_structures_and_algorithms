#include"head.h"
void PrintList(SeqList& L)
{
	for (int i = 0;i < L.length;i++)
		printf(" %d ", L.data[i]);
	printf("\n");
}
