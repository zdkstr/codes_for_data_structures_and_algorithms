#include"head.h"
void CreateBiTree(SqBiTree& T){
	ElemType x;
	scanf("%d",&x);
	for(int i=1; x!=9999 && i<MaxSize;i++){  // 从下标为1的位置开始存储
		T.data[i]=x;
		T.node_number+=1;
		scanf("%d",&x);
	}
}
