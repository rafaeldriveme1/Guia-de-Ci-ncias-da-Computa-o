# Programação Procedural

Paradigma de programação que especifica os passos que um 
programa deve seguir para alcançar um estado desejado.
Os Procedimentos, também conhecidos como rotinas, subordinas, métodos, 
ou funções.

## C

C[2] é uma linguagem de programação compilada de propósito geral, estruturada, imperativa, procedural, padronizada pela Organização Internacional para Padronização (ISO), criada em 1972 por Dennis Ritchie na empresa AT&T Bell Labs para desenvolvimento do sistema operacional Unix (originalmente escrito em Assembly).[3]

C é uma das linguagens de programação mais populares e existem poucas arquiteturas para as quais não existem compiladores para C. C tem influenciado muitas outras linguagens de programação (por exemplo, a linguagem Java),[6] mais notavelmente C++, que originalmente começou como uma extensão para C.

#### Compilador

https://www.cygwin.com/

#### Compilar no terminal

```sh
gcc main.c -o main

./main.exe
```

## Sumario

[00. Histórico, printf, Hello World](#user-content-histórico-printf-hello-world)

[01. Case-Sensitive, scanf, comentários](#user-content-case-sensitive-scanf-comentários)

[02. Tipos de variáveis](#user-content-tipos-de-variáveis)

[03. Operadores Aritméticos e Relacionais ](#user-content-operadores-aritméticos-e-relacionais)

## Histórico, printf, Hello World 

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("Hello world! \n\n");
	
	return 0;
}
```

## Case-Sensitive, scanf, comentários 

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int numero;
	
	printf("Entre com um numero:");
    scanf("%d", &numero);
    getchar();

    printf("Seu numero e : %d \n\n", numero);
	
	return 0;
}
```

## Tipos de variáveis

![Tipos de variáveis](/1-periodo/images/c/tipos-variaveis.png)

![Tipos de variáveis](/1-periodo/images/c/tipos-variaveis2.png)

```c
#include <stdio.h>
#include <stdlib.h>

/*
Tipo  Tamanho   Intervalo
---------------------------------
char     8      -128 a 127
int      16     -32768 a 32767
float    32     3,4E-38 a 3.4E+38
double   64     1,7E-308 a 1,7E+308
void     0      sem valor
*/

int main(int argc, char *argv[]) {

    int numero01 = 15;
    float numero02 = 22.5;
    char caractere = 'w';
    char caractere02 = 48;
	
	printf("%d\n", numero01);
    printf("%.2f\n", numero02);
    printf("%c\n", caractere);
    printf("%c\n", caractere02);
	
	return 0;
}
```

## Operadores Aritméticos e Relacionais 

![Operadores Aritméticos e Relacionais ](/1-periodo/images/c/operadores-1.png)

![Operadores Aritméticos e Relacionais ](/1-periodo/images/c/operadores-2.png)

![Operadores Aritméticos e Relacionais ](/1-periodo/images/c/operadores-1.png)

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("%d\n", 5+2); // 7
	printf("%d\n", 9-4); // 7
	printf("%d\n", 2*3); // 7
	printf("%d\n", 10/5); // 7
	
	return 0;
}
```

## Referencias

| Conteúdo  | links | Credito |
| ------------- | ------------- |
| PDF  | [Link](https://www.ime.usp.br/~slago/slago-C.pdf)  | |
| YOUTUBE  | [Link](https://www.youtube.com/playlist?list=PLZ8dBTV2_5HTGGtrPxDB7zx8J5VMuXdob)  | WR Kits |