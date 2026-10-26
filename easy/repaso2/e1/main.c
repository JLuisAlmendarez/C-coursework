#include <stdio.h>

int sumar(int a, int b){
    int c = a+b;
    return c;
}

int es_par(int n){
    if (n%2 == 0){
        printf("Es par\n");
        return 0;
    }
    else if (n%2 == 1) {
        printf("No es par\n");
        return 1;
    }
}

int main(void){
    
    int n1;
    int n2;

    printf("Ingresa el primer numero\n");
    scanf("%d", &n1);

    printf("Ingresa el segundo numero\n");
    scanf("%d", &n2);
    
    int n3 = sumar(n1,n2);

    printf("Resultado: %d\n", n3);

    es_par(n3);
    
    return 0;
}
