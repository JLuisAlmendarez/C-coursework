#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    /*
    for (int i = 0; i < argc ; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    
    }
    */
    /*
    printf("Hola %s bienvenido al programa.\n", argv[1]);
    int suma = 0;

    for (int i = 2; i < argc ; i++) {
        suma += atoi(argv[1]);
    
    }
    */

    
    for (int i = 1; i < argc; i++) {
        if (atoi(argv[i]) > 10 || atoi(argv[i]) < 5) {
            return EXIT_FAILURE;
        }
    }
    
    float suma = 0.0f;

    for (int i = 1; i < argc ; i++) {
        suma += atof(argv[i]);
    }

    float promedio = suma / (argc -1);

    printf("%f", promedio);
    

    return EXIT_SUCCESS;
}
