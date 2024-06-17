#include"head.h"
//串赋值，复制串T的堆空间地址到串S
void StrAssign(HString& S, HString &T){
	if(S.ch!=NULL) free(S.ch);
	S.ch = T.ch;
	S.length = T.length;
}
