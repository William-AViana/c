# Learning C

## Anotations
 - ``` <stdio.h>``` biblioteca de arquivos de cabeçalho que nos permite 
 trabalhar com funções de entrada e saída, como ```printf()```.
 - ```printf()``` função para informar ao compilador que tipo de dados a 
 variável está armazenando.
 - Especificador de formato para a função ```printf()``` começa com um sinal de 
 porcentagem ```%```, seguido por um caractere.
    - Variável ```int``` você deve usar o especificador de formato ```%d``` ou 
  ```%i``` entre aspas duplas dentro da função ```printf()```.
    - Variável ```char``` especificador ```%c```.
    - Variável ```float``` especificador ```%f```.
    - Variável ```double``` especificador ```%lf```.
    - Variável ```string``` especificador ```%s```.
 - ```\n``` é chamado de sequência de escape e força o cursor a mudar sua 
posição para o início da próxima linha na tela.
 - ```\t``` Cria uma guia horizontal.
 - ```\\``` Insere um caractere de barra invertida (\).
 - ```\"``` Insere um caractere de aspas duplas.
 ### Variáveis
- ```int``` - armazena inteiros (números inteiros), sem decimais, como 123 ou -123
- ```float``` - armazena números de ponto flutuante, com decimais, como 19,99 ou -19,99
- ```char``` - armazena caracteres únicos, como 'a' ou 'B'. Os valores de caractere são cercados por aspas simples
- As regras gerais para nomear variáveis ​​são:
  - Os nomes podem conter letras, dígitos e sublinhados.
  - Os nomes devem começar com uma letra ou sublinhado (_).
  - Os nomes diferenciam maiúsculas de minúsculas ( myVare myvarsão variáveis ​​diferentes).
  - Os nomes não podem conter espaços em branco ou caracteres especiais como !, #, %, etc.
  - Palavras reservadas (como int) não podem ser usadas como nomes.

- Quando você não quiser que outros (ou você mesmo) substituam os valores de variáveis ​​existentes, use a 
palavra chave ```const```(isso declarará a variável como "constante", o que significa imutável e somente leitura ).

### Sintaxe
```C
type variable = value;
int myNum = 15;

const int BIRTHYER = 1972;
```

### Operadores aritiméticos

<table class="ws-table-all notranslate">
<tbody><tr>
<th style="width:15%">Operador</th>
<th style="width:18%">Nome</th>
<th style="width:40%">Descrição</th>
<th style="width:17%;">Exemplo</th>
</tr>
<tr>
<td>+</td>
<td>Adição</td>
<td>Soma dois valores</td>
<td>x + y</td>
</tr>
<tr>
<td>-</td>
<td>Subtração</td>
<td>Subtrai um valor de outro</td>
<td>x - y</td>
</tr>
<tr>
<td>*</td>
<td>Multiplicação</td>
<td>Multiplica dois valores</td>
<td>x * y</td>
</tr>
<tr>
<td>/</td>
<td>Divisão</td>
<td>Divide um valor por outro</td>
<td>x / y</td>
</tr>
<tr>
<td>%</td>
<td>Módulo</td>
<td>Retorna o resto da divisão</td>
<td>x % y</td>
</tr>
<tr>
<td>++</td>
<td>Incremento</td>
<td>Aumenta o valor de uma variável em 1</td>
<td>++x</td>
</tr>
<tr>
<td>--</td>
<td>Decremento</td>
<td>Diminui o valor de uma variável em 1</td>
<td>--x</td>
</tr>
</tbody>
</table>
