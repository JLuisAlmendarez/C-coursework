#include <stdio.h>

int main(){

    float cal1, cal2, cal3;
    float fal1, fal2, fal3;
    
    printf("Primer alumno:\n");
    printf("Primera calificacion:\n");
    scanf("%f", &cal1);
    printf("Primer numero de faltas:\n");
    scanf("%f", &fal1);

    if (cal1>=6 && fal1 < 6){
        printf("EL primer alumno aprobo el curso\n");
    } else if (cal1<6 && fal1 < 6) {
        printf("El primer alumno reprobo por calificacion\n");
    } else if (cal1>=6 && fal1 >= 6) {
        printf("El primer alumno reprobo por faltas\n");
    }
    
    printf("Segundo Alumno:\n");
    printf("Segunda calificacion:\n");
    scanf("%f", &cal2);
    printf("Segundo numero de faltas:\n");
    scanf("%f", &fal2);

    if (cal2>=6 && fal2 < 6){
        printf("EL primer alumno aprobo el curso\n");
    } else if (cal2<6 && fal2 < 6) {
        printf("El primer alumno reprobo por calificacion\n");
    } else if (cal2>=6 && fal2 >= 6) {
        printf("El primer alumno reprobo por faltas\n");
    }

    printf("Tercer alumno:\n");
    printf("Tercera calificacion:\n");
    scanf("%f", &cal3);
    printf("Tercer numero de faltas:\n");
    scanf("%f", &fal3);

    if (cal3>=6 && fal3 < 6){
        printf("EL primer alumno aprobo el curso\n");
    } else if (cal3<6 && fal3 < 6) {
        printf("El primer alumno reprobo por calificacion\n");
    } else if (cal3>=6 && fal3 >= 6) {
        printf("El primer alumno reprobo por faltas\n");
    }

    float avg_grupo = (cal1+cal2+cal3)/3;
    printf("Promedio del grupo %f\n", avg_grupo);

    char estado_grupo = avg_grupo >= 7 ? 'B' : 'M'; 
    printf("Estado grupo:%c", estado_grupo);
    return 0;
}
