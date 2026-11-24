#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha {
    short dia;
    short mes;
    short anio;
};

struct alumno {
    unsigned int uid;
    char nombre[50];
    int edad;
    float calificacion;
    struct fecha cumpleanios;
};

void limpiarNombre(char nombre[], int longitud){
    for (int i=0;i<longitud;i++) {
        if(nombre[i]=='\n'){
            nombre[i]=0;
        }
    }
}

struct strmateria{
    char nombre[50];
    float calificacion;
};

int main(void){

    struct alumno alumno1 = {1111,"Fulanito", 19, 9.91};
    printf("El alumno con el identificador %d, con el nombre %s, de edad %d, con calificacion %f\n", alumno1.uid, alumno1.nombre, alumno1.edad, alumno1.calificacion);

    struct alumno alumno2 = {1112,"Fulanita", 20, 9.92};
    printf("El alumno con el identificador %d, con el nombre %s, de edad %d, con calificacion %f\n", alumno2.uid, alumno2.nombre, alumno2.edad, alumno2.calificacion);

    struct alumno alumno3 = {1112,"x", 20, 9.92, {10,10,10}};
    printf("El alumno con el identificador %d, con el nombre %s, de edad %d, con calificacion %f, cumple el %d de %d\n", alumno3.uid, alumno3.nombre, alumno3.edad, alumno3.calificacion, alumno3.cumpleanios.dia, alumno3.cumpleanios.mes);

    struct alumno alumnos[5];

    for (int i=0;i<5;i++) {
        printf("Ingresa el nombre del alumno %d\n", i);
        fgets(alumnos[i].nombre, 50, stdin);
        limpiarNombre(alumnos[i].nombre, 50);
    }

    printf("Un saludo a mis alumnos\n");
    for (int i=0;i<5;i++) {
        printf("%s", alumnos[i].nombre);
        if (i < 4) {
            printf(", ");
        }
    }

    struct strmateria materias[3];

    printf("Ingresa materias y calificacion");

    for (int i=0;i<3;i++) {
        printf("\nMateria %d: ", i + 1);
        fgets(materias[i].nombre, 50, stdin);

        for (int j = 0; materias[i].nombre[j] != '\0'; j++) {
            if (materias[i].nombre[j] == '\n') {
                materias[i].nombre[j] = '\0';
            }
        }

        printf("Calificacion: ");
        scanf("%f", &materias[i].calificacion);
        while (getchar() != '\n');
    }

    float suma = 0;

    for (int i=0;i<3;i++) {
        suma += materias[i].calificacion;
    }

    float promedio = suma/3;

    printf("El promedio del semestre es %f", promedio);


    return EXIT_SUCCESS;
}
