# Learning C

## Anotations
 - ``` <stdio.h>``` biblioteca de arquivos de cabeçalho que nos permite 
 trabalhar com funções de entrada e saída, como ```printf()```.
 - ```printf()``` função para informar ao compilador que tipo de dados a 
 variável está armazenando.
 - Especificador de formato para a função ```printf()``` começa com um sinal de 
 porcentagem ```%```, seguido por um caractere.
    - Variável ```int``` você deve usar o especificador de formato ```%d``` ou 
  ```%i``` entre aspas .
    - Variável ```char``` especificador ```%c```.
    - Variável ```float``` especificador ```%f```.
  duplas dentro da função ```printf()```
 - ```\n``` é chamado de sequência de escape e força o cursor a mudar sua 
posição para o início da próxima linha na tela.
 - ```\t``` Cria uma guia horizontal.
 - ```\\``` Insere um caractere de barra invertida (\).
 - ```\"``` Insere um caractere de aspas duplas.
 ### Variáveis
- ```int``` - armazena inteiros (números inteiros), sem decimais, como 123 ou -123
- ```float``` - armazena números de ponto flutuante, com decimais, como 19,99 ou -19,99
- ```char``` - armazena caracteres únicos, como 'a' ou 'B'. Os valores de caractere são cercados por aspas simples

### Sintaxe
- type variable = value;
- int myNum = 15;