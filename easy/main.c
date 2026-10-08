#include <stdio.h>
#include "stats.h"

int main (void){
    int numero1, numero2;
    printf("Introduce los numeros\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    printf("El numero mayor es %d", max(numero1, numero2));

}
