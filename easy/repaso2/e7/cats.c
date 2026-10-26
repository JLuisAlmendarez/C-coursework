#include <stdio.h>
#include "cats.h"

void imprimir_tulio(){
    printf("este gato es tulio tiene %d años\n", EDAD);
}

void imprimir_bizcocho(){
    printf("este gato es bizcocho tiene %d años\n", EDAD);
}

void imprimir_negro(){
    printf("este gato es negro tiene %d años\n", EDAD);
}

int imprimir_los_demas(int n){
    switch (n) {
        case 0:
            printf("es alambre\n");
            break;
        case 1:
            printf("es wero\n");
            break;
        case 2:
        case 3:
            printf("es alguno de los loquillos o blanco o pumba\n");
            break;

    }
}
