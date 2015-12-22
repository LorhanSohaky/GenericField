#ifndef GENERICFIELD_H
#define GENERICFIELD_H
#include <stdio.h>
#include <stdbool.h>

typedef union{
    bool *b;
	char *c;
	double *d;
    float *f;
    int *i;
    void *v;

} GenericValue;

typedef enum{
    BOOL=1,
    CHAR,
    DOUBLE,
    FLOAT,
    INT,
    VOID
} FieldType;

typedef struct{
    FieldType type;
    GenericValue value;
} GenericField;

GenericField *setField(FieldType t, void *value);
bool *getValueBool(GenericField *f);
char *getValueChar(GenericField *f);
double *getValueDouble(GenericField *f);
float *getValueFloat(GenericField *f);
int *getValueInt(GenericField *f);
void *getValueVoid(GenericField *f);
int getFieldType(GenericField *f);

#endif