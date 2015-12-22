#include <stdio.h>
#include <string.h>
#include <GenericField.h>

typedef struct{
    char c[100];
    int v;
} T;

int main(){
	int x,*y;
    T a,*b;
    GenericField *k,*l;

	x=5;
	
    strcpy(a.c,"HOUSE 1");
    a.v=10;
	
	l=setField(INT,&x);
    k=setField(VOID,&a);

    b=(T *)getValueVoid(k);
	y=getValueInt(l);
	printf("INT:%d\n",*y);
	
    printf("T:%d  %s\n",b->v,b->c);
	getchar();
    return 0;
}