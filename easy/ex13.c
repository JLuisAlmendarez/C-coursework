#include <stdio.h>

/*
int main (void) {
    for (int i=0;i<10;i++) { //inicia;condicion true false;Instruccion  y es secuencial es decir 1->;2->;->3;
        for (int j=0;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}*/

int main (void){

    int m,n;
    m=3,n=2;
    /*
    printf("Ingresa el numero de escalones en tus escaleras:");
    scanf("%d", &m);
    printf("Ingresa el numero de escaleras:");
    scanf("%d", &n);*/
    /*
    for (int k = 1; k<=n;k++){
        for (int i=1;i<=m;i++) {
            for (int j=1;j<=i;j++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }*/
    /*
    for (int k = 1; k<=n;k++){
        for (int i=1;i<=m;i++) {
            for (int j=i;j<m;j++) {
                printf(" ");
            }
            for (int j=1;j<=i;j++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }*/

    for (int k = 1; k<=n;k++){
        for (int i=1;i<=m;i++) {
            for (int j=i;j<m;j++) {
                printf(" ");
            }
            for (int j=1;j<=2*i-1;j++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    //modificar este ciclo para que sea una piramides y a la derecha
}


