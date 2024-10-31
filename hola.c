#include <stdio.h>

int main(int argc, char **argv){ //(numero de elementos, apuntador de apuntadores -> arreglo)
    for(int i=1; i<argc; i++){
         printf("Hola %s\n", argv[i]);
    }
    //char *s = "Hola"; Guarda la primer letra
    return 0;

} 