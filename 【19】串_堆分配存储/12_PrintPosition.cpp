#include"head.h"
void PrintPosition(int pos){
	if(pos==0)
		printf("主串中没有对应的子串\n");
	else
		printf("主串的第%d个元素起存在一个子串\n",pos);
}
