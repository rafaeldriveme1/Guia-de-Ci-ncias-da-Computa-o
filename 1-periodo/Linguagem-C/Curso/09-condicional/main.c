#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    int b;

    printf("Digite um valor para a:");
    scanf("%d", &a);
    getchar();
    printf("Digite um valor para b:");
    scanf("%d", &b);
    getchar();

    if (a < b)
    {
        printf("a menor que b\n\n");
    }
    else if(b < a)
    {
        printf("b menor que a\n\n");
    }
    else
    {
        printf("a eh igual a b\n\n");
    }

    return 0;
}