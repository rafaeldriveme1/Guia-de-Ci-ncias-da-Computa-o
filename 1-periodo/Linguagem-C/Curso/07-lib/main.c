#include <stdio.h>
#include "tools.h"

int main(int argc, char *args[]) {
    printf("%d\n", sum(2,5));
    
    return 0;
}

/*
gcc -c tools.c

gcc tools.o main.c -o main
*/