#include <stdio.h>

void enter(){
    printf("\n");
}

int pedir_entero() {

    int numero;
    printf("Introduce un numero entero: ");
    int ret = scanf("%d", &numero);
    if (ret!=1) {
        printf("Eso no es un numero");
        return -1;
    }

    return numero;
}

int max_de_2_numeros (int a, int b){
    if (a > b) 
        return a;
    else
        return b;
}

int min_de_3_numeros (int a, int b, int c){
    if (a < b && a < c)
        return a;
    else if (b < a && a < c)
        return b;
    else
        return c;
}

int max_de_3_numeros (int a, int b, int c){
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int avg_de_3_numeros (int a, int b, int c){
    int avg = (a+b+c)/3;
    return avg;

}

int main () {

    
    int num1 = pedir_entero();
    int num2 = pedir_entero();
    int num3 = pedir_entero();
    
    if (num1 == -1 || num2 == -1 || num3 == -1){
        return -1;
    }
    enter();

    printf("El numero mas pequeño es: %d\n", min_de_3_numeros(num1,num2, num3));
    printf("El numero mas grande es:%d\n", max_de_3_numeros(num1, num2, num3));
    printf("El promedio es:%d\n", avg_de_3_numeros(num1, num2, num3));

    /*
    enter();
    printf("El numero mas grande es: %d", max_de_2_numeros(num1, num2));
    return 0;
    */
}
