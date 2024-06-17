#include"head.h"
void PrintBiTree(SqBiTree& T){
	for(int i=1;i<=T.node_number;i++) // 从下标为1的位置开始
		printf("%d ",T.data[i]);
}
