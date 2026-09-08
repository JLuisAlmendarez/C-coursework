#include <stdio.h>

int main(){//casting
    /*
    short int anno = -2026;
    unsigned short int annoPositivo = -2026;
    int annoInt = annoPositivo;

    int var;
    printf("Escribe tu edad:");
    scanf("%d", &var);
    printf("Tienes %d años\n",var);

    float varf;
    printf("Introduce tu estatura en metros:");
    scanf("%f", &varf);
    printf("Mides %.2f metros\n", varf);

    int dia, mes, annio;
    printf("Porfavor introduce la fecha en formato DD/MM/AAAA: ");
    scanf("%d %d %d", &dia, &mes, &annio);
    printf("%d del %d de %d\n", dia, mes, annio);
    */
   
    int dig1, dig2;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &dig1, &dig2);
    int ans = dig1+dig2;
    printf("Resultado %d", ans);


    return 0;
}
