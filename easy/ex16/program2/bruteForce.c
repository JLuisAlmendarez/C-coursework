#include <stdio.h>
#include "security.h"
//
int main(void) {
    for (int pin = 0; pin <= 9999; pin++) { //tambien se puede hacer con un do-while
        int respuesta = validarPin(pin);

        if (respuesta == 1) {
            printf("PIN encontrado: %04d\n", pin);
            return 0;
        }
    }

    printf("No se encontro un PIN valido.\n");
    return 0;
}

