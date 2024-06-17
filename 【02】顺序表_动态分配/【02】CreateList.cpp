#include"head.h"
void CreateList(SeqList& L) {
	ElemType x;int i;
	printf("输入线性表，按9999回车结束:");
	scanf("%d", &x);
	for (i=0; x!= 9999;i++) {
		if(i>=L.MaxSize){
			printf("【出错】：超过最大长度\n");
			exit(0);
		}
		L.data[i] = x;
		scanf("%d", &x);
	}
	L.length = i;
}
