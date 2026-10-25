#include <stdio.h>
#include "security.h"

int main(void){
    int pin;
    printf("Introduce el pin \n");
    scanf("%d", &pin);
    
    int respuesta = validarPin(pin);

    printf("%d", respuesta);
}
