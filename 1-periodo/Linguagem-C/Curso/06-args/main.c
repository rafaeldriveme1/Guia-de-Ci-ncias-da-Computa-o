#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {
    int Resultado, valorA=0, valorB=0;
    
    //atoi converte de alfanumérico para inteiro
    valorA = atoi(args[1]);
    valorB = atoi(args[2]);
    Resultado = valorA * valorB;
    printf("Multiplicacao de %d * %d é %d\n", valorA, valorB, Resultado);

    int cont;

    for(cont=0; cont < argc; cont++)
        printf("%d Parametro: %s\n", cont, args[cont]);

    return 0;
}

/*
gcc main.c

./main 3 3
*/