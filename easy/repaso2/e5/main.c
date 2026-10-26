#include <stdio.h>

int main(){
    int age;
    printf("que edad tienes?\n");
    scanf("%d",&age);
    enum rango {INFANCIA, ADOLESCENCIA, ADULTEZ, TERCERA_EDAD};
    enum rango mi_rango;
    if (age < 0) {
        printf("invalida\n");
        return 1;
    } else if (age < 10) {
        mi_rango = 0;
    } else if (age < 18) {
        mi_rango = 1;
    } else if (age < 40) {
        mi_rango = 2;
    } else {
        mi_rango = 3;
    }

    switch (mi_rango) {
        case INFANCIA:
            printf("no puede votar\n");
            break;
        case ADOLESCENCIA:
            printf("aun no puede votar\n");
            break;
        case ADULTEZ:
        case TERCERA_EDAD:
            printf("ya puede votar\n");
            break;
    }
    return 0;
}
