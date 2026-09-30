#include <stdio.h>

int main () {
    
    unsigned char num_empleado;
    float peso, altura;

    printf("Ingrese el numero de empleado: ");
    scanf("%hhu", &num_empleado);
    printf("Ingrese el peso: ");
    scanf("%f", &peso);
    printf("Ingrese la altura");
    scanf("%f", &altura);
    
    float imc = peso/(altura*altura);
    
    if (imc < 18.5) {
        printf("Estas bajo de peso amigo, aca el compañero trajo paninis");
    } else if (imc < 24.9) {
        printf("Estas bien de peso");
    } else {
        printf("Tienes sobrepeso");
    }

    if (0b10000000 & num_empleado){
        printf("Recuerda que tu consulta es gratis");
    }

    return 0;
}
