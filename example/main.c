/*
The MIT License (MIT)
Copyright (c) 2015 Lorhan Sohaky
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <stdio.h>
#include <string.h>
#include <GenericField.h>

typedef enum{
	INT=1,
	CHAR,
	STRUCT1
}type;

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
    k=setField(STRUCT1,&a);

	if(getFieldType(l)==1){
		y=getFieldValue(l);
		printf("INT:%d\n",*y);
	}

	if(getFieldType(k)==3){
		b=getFieldValue(k);
		printf("T:%d  %s\n",b->v,b->c);
	}
	getchar();
    return 0;
}
