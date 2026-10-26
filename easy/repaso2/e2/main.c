#include <stdio.h>

void clf_sym_calificacion(int n){
    if (n<70) {
        printf("reprbado\n");
    } else if (n<=79) {
        printf("suficiente\n");
    } else if (n<=89) {
        printf("bueno\n");
    } else if (n<=100) {
        printf("excelente\n");
    }
}

void numero_mayor(int n1, int n2, int n3){
    if (n1 > n2 && n1 > n3) {
        printf("%d es mayor\n",n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("%d es mayor\n", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("%d es mayor\n", n3);
    }
}

void signo_numero(int n){
    if (n>0) {
        printf("es positivo\n");
    } else if (n<0) {
        printf("es negativo\n");
    } else if (n==0) {
        printf("es 0\n");
    }
}

int main(void){
    /*
    int cal;
    scanf("%d", &cal);
    clf_sym_calificacion(cal);

    int n1, n2, n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    numero_mayor(n1,n2,n3);
    */
    int n;
    scanf("%d",&n);
    signo_numero(n);
    return 0;
}
