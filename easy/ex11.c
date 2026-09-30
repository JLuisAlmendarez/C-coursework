#include <stdio.h>
/*
int ret_num (char equipo) {




}

int main void alt
*/
/*
int main (void) {

    char equipo;

    printf("De que equipo eres America, atlas, Chivas, cruz, Santos, Pumas");
    scanf("%c", &equipo);

    switch (equipo) {
        case 'C':
        case 'P':
            printf("/nEres un campeón aunque ya no ganes campeonatos");
            break;
        case 'M':
            printf("Odiame mas");
            break; 
        case 'U':
            printf("Y tu estadio?");
            break;
        default:
            printf("No soporto perdedores");
            break;
        
            }

    return 0;
}*/

int main (void) {
    int mes;
    int anio;
    printf("Mes: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("El mes tiene 31 dias");
            break;
        case 2:
            printf("¿Año?:\n");
            scanf("%d", &anio);
            if (anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0)) {
                printf("El mes tiene 29 dias");
            } else {
                printf("El mes tiene 28 dias");
            }
            break;
        default:
            printf("El mes tiene 30 dias");
            break;
    }

}
