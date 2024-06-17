#include"head.h"
void DestroyString(HString& S) {
    if (S.ch!=NULL){
		free(S.ch);
		S.ch = NULL;
		S.length = 0;
	}
}
