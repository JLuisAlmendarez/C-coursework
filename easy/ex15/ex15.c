#include <stdio.h>
/*
#define SALUDO() printf("Saludosa\n")
#define MI_EDAD 19
#define CUADRADO(numero) numero*numero

int main (void) {

    SALUDO();
    int edad = MI_EDAD;
    printf("%d\n", edad);
    printf("%d\n", CUADRADO(4));

    int user_pin;
    do {
        printf("Introduce el pin correcto\n");
        scanf("%d", &user_pin);
    }while (user_pin != 1234);

    printf("acceso\n");
}*/

#define Celsius(numero) (numero-32)/1.8
#define Max(num1, num2) (num1 > num2) ? num1:num2

int main (void){
    
    float farenheit = 86.7;
    float f_to_c = Celsius(farenheit);
    
    printf("%f\n", f_to_c);

    printf("%f\n", Max(f_to_c, 29.64));


}
