#include <stdio.h>

int main(int argc, char **argv){
    for(int i = 0; i < argc; i++){
        printf("Hola %s\n", argv[i]);
    }
    return 0;
}

//gcc -o {out name} hola.c
//./{out name} {arg, arreglo de nombres}