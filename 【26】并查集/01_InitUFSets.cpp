#include"head.h"
// 一个下标对应一个结点，数据表示其双亲，-1表示该结点没有双亲，是根结点
void InitUFSets(int UFSets[]) {
	for (int i = 0;i < MaxSize;i++)
		UFSets[i] = -1;
}
