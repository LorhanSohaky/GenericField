## TIPO GENÉRICO DE CAMPO EM C

### LICENÇA
**MIT**
[Leia a licença](LICENSE)

### COMPILADOR UTILIZADO
***GCC (TDM-1) 4.7.1 -> Windows***

### OBJETIVO
Criar tipos genéricos de campos para utiliza-lo em conceitos como Lista, Fila e entre outros.

### COMO USAR
'GenericField *setField(FieldType t, void *value)': 
	-FieldType t: Tipo de dado;
	-void *value: Endereço de memória do valor.

'int getFieldType(GenericField *f)':
	
'bool *getValueBool(GenericField *f)': 
	-GenericField *f: Endereço de memória do GenericField.

'char *getValueChar(GenericField *f)':
	-GenericField *f: Endereço de memória do GenericField.
	
'double *getValueChar(GenericField *f)':
	-GenericField *f: Endereço de memória do GenericField.
	
'float *getValueChar(GenericField *f)':
	-GenericField *f: Endereço de memória do GenericField.	
	
'int *getValueChar(GenericField *f)':
	-GenericField *f: Endereço de memória do GenericField.

'void *getValueChar(GenericField *f)':
	-GenericField *f: Endereço de memória do GenericField.	