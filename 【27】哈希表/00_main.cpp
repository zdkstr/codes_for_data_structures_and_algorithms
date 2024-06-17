#include"head.h"
int main(){	
	// 定义一个存放字符串的数组，将其改造成哈希表
	printf("定义一个字符串...\n"); const char *p="字符串1";
	printf("用哈希函数将指针转化为数组下标："); int sub=hash(p); printf("%d\n",sub);
	printf("定义并初始化数组...\n"); const char* array[10]={NULL};
	printf("将指针存入数组....\n"); array[sub]=p;
	printf("打印数组中所存储的指针：");
	for(int j=0;j<10;j++) 
		printf("%d ",array[j]);
	putchar('\n');
	printf("打印数组中指针所指向的字符串：");
	for(int j=0;j<10;j++) 
		printf("%s ",array[j]);
	putchar('\n');
	return 0;
}
