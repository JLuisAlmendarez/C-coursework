#include <stdio.h>
#include <stdlib.h>

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

    return EXIT_SUCCESS;
}
