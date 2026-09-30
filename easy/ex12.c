#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void desplegar_menu(){
    printf("\n===========================================\n");
    printf("Soy tu convertirdor de divisas\n");
    printf("Selecciona tu opcion:\n");
    printf("1. Pesos a Dolares\n");
    printf("2. Dolares a pesos\n");
    printf("3. Euros a pesos\n");
    printf("4. Pesos a Euros\n");
    printf("0. Salir\n");
}
void print_frame_1(void){
    printf("***************\n");
    printf("*             *\n");
    printf("*   FRAME 1   *\n");
    printf("*             *\n");
    printf("***************\n");
}

void print_frame_2(void){
    printf("###############\n");
    printf("#             #\n");
    printf("#   FRAME 2   #\n");
    printf("#             #\n");
    printf("###############\n");
}

void print_frame_3(void){
    printf("================\n");
    printf("|              |\n");
    printf("|   FRAME 3    |\n");
    printf("|              |\n");
    printf("================\n");
}


int main (void){ 
/*
    int  opcion_selecionada;

    do {
        desplegar_menu();
        scanf("%d", &opcion_selecionada);
        float pesos, dls, euros;
        switch (opcion_selecionada) {
            case 1:
                printf("Ingresa la cantidad en pesos\n");
                scanf("%f", &pesos);
                dls = pesos / 17.94;
                printf("\n %f pesos equivales a %f dolares", pesos, dls);
                break;
            case 2:
                printf("Ingresa la cantidad en dolares\n");
                scanf("%f", &dls);
                pesos = dls * 17.94;
                printf("\n %f pesos equivalen a %f dolares", dls, pesos);
                break;
            case 3:
                printf("Ingresa la cantidad en euros\n");
                scanf("%f", &euros);
                pesos = euros * 20.94;
                printf("\n %f euros equivalen a %f pesos", euros, pesos);
                break;
            case 4:
                printf("Ingresa la cantidad en pesos\n");
                scanf("%f", &pesos);
                euros = pesos / 20.94;
                printf("\n %f pesos equivalen a %f euros", pesos, euros);
                break; 

            default:
                break;
        }
    } while (opcion_selecionada!=0);*/
    /*
    srand(time(NULL));
    int numero = (rand() % 10)+1;
    printf("Numero al azar: %d\n", numero);
    printf("Ingresa un numero del 1 al 10 tienes 3 oportunidades\n");
    int input = 0;
    int cnt = 0;

    while (cnt < 3){
        scanf("%d", &input);
        cnt++;

        if (input == numero){
            printf("Ganaste!\n");
            break;
        }
        if (cnt == 3){
            printf("Te acabaste todos los intentos(3), perdiste\n");
            break;
        }

        if (cnt <= 2){
            printf("Lleva %d intento/s\n", cnt);
        }
    }*/
    while (1) {
        usleep(200000);
        printf("\033[2J\033[H");
        print_frame_1();
        fflush(stdout);
        usleep(200000);
        printf("\033[2J\033[H");
        print_frame_2();
        fflush(stdout);
        usleep(200000);
        printf("\033[2J\033[H");
        print_frame_3();
        fflush(stdout);
    }

}
