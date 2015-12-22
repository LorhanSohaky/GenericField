## TIPO GENÉRICO DE CAMPO EM C

### LICENÇA
**MIT**
[Leia a licença](LICENSE)

### COMPILADOR UTILIZADO
***GCC (TDM-1) 4.7.1 -> Windows***

### OBJETIVO
Criar tipos genéricos de campos para utiliza-lo em conceitos como Lista, Fila e entre outros.

###NOTAS:
-A função *getFieldType* retorna 0 em caso de erro, portanto o tipo de dado nunca pode ser 0, pois ele é reservado para erros.

### COMO USAR
`GenericField *setField(int t, void *value)`: 
	-int t: Tipo de dado;
	-void *value: Endereço de memória do valor.

`int getFieldType(GenericField *f)`:

`void *getValue(GenericField *f)`:
	-GenericField *f: Endereço de memória do GenericField.	
