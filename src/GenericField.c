#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <GenericField.h>

GenericField *setField(FieldType t, void *value){
    GenericField *f;
    f=(GenericField *)malloc(sizeof(f));
    if(t<BOOL || t>VOID || f==NULL){
        return NULL;
    }
    f->type=t;
    switch(t){
        case BOOL:
            f->value.b=value;
            break;
        case CHAR:
            f->value.c=value;
            break;
        case DOUBLE:
            f->value.d=value;
            break;
        case FLOAT:
            f->value.f=value;
            break;
        case INT:
            f->value.i=value;
            break;
        default:
            f->value.v=value;
    }
    return f;
}

bool *getValueBool(GenericField *f){
    if(f!=NULL){
        return f->value.b;
    }
    return NULL;
}

char *getValueChar(GenericField *f){
    if(f!=NULL){
        return f->value.c;
    }
    return NULL;
}

double *getValueDouble(GenericField *f){
    if(f!=NULL){
        return f->value.d;
    }
    return NULL;
}

float *getValueFloat(GenericField *f){
    if(f!=NULL){
        return f->value.f;
    }
    return NULL;
}

int *getValueInt(GenericField *f){
    if(f!=NULL){
        return f->value.i;
    }
    return NULL;
}

void *getValueVoid(GenericField *f){
    if(f!=NULL){
        return f->value.v;
    }
    return NULL;
}

int getFieldType(GenericField *f){
    if(f!=NULL){
        return f->type;
    }
    return -1;
}
