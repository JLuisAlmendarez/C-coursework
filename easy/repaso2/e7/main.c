#include <stdio.h>
#include <stdlib.h>
#include "cats.h"

int main(void){
    imprimir_tulio();
    imprimir_bizcocho();
    imprimir_negro();
    
    int n1=0;
    int n2=1;
    int n3=2;

    imprimir_los_demas(0);
    imprimir_los_demas(1);
    imprimir_los_demas(2);

    return EXIT_SUCCESS;
}
