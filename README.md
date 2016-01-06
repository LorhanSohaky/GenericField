## LISTA GENÉRICA EM C

### LICENÇA
**MIT**
[Leia a licença](LICENSE)

### COMPILADOR UTILIZADO
***gcc (Ubuntu 4.8.5-2ubuntu1~14.04.1) 4.8.5***

### OBJETIVO
Criar campo genérico com a finalidade de utilizá-lo no conceito de lisa, pilha, fila e lista.

### NOTAS:
- A função *getFieldType* retorna -1 em caso de erro, portanto o tipo de dado nunca pode ser -1, pois ele é reservado para erros.

### COMO USAR
`GenericField *setField(int t, void *value)`: Cria o campo. Retorna NULL em caso de erro.
- int t: Tipo de dado;
- void *value: Endereço de memória do valor.

`int getFieldType(GenericField *field)`: Retorna o tipo do campo. Retorna -1 em caso de erro.
- GenericField *field: Endereço de memória do GenericField.

`void *getFieldValue(GenericField *field)`: Retorna o valor do campo. Retorna NULL em caso de erro.
- GenericField *field: Endereço de memória do GenericField.
