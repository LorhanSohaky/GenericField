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

#include "GenericField.h"
#include <stdlib.h>

struct G {
    unsigned int type;
    void *value;
};

static int compareGenericField( const GenericField *value1,
                                const GenericField *value2,
                                const unsigned int sizeOfDataType );

GenericField *setField( const unsigned int type, const void *value, const size_t sizeOfDataType ) {
    GenericField *field = malloc( sizeof( GenericField ) );

    if( !field ) {
        return NULL;
    }

    field->value = malloc( sizeOfDataType );
    if( !field->value ) {
        free( field );
        return NULL;
    }

    field->type = type;
    memcpy( field->value, value, sizeOfDataType );

    return field;
}

void *getFieldValue( const GenericField *field ) {
    if( field != NULL ) {
        return field->value;
    }
    return NULL;
}

int getFieldType( const GenericField *field ) {
    if( field != NULL ) {
        return field->type;
    }
    return -1;
}

int equalsGenericField( const GenericField *value1,
                        const GenericField *value2,
                        const unsigned int sizeOfDataType ) {
    return ( value1->type == value2->type ) &&
        !compareGenericField( value1, value2, sizeOfDataType );
}

static int compareGenericField( const GenericField *value1,
                                const GenericField *value2,
                                const unsigned int sizeOfDataType ) {
    return memcmp( value1->value, value2->value, sizeOfDataType );
}

void freeGenericField( GenericField *field ) {
    free( field->value );
    free( field );
}
