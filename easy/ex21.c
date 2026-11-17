#include <bits/posix2_lim.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER 12

void toUpperCase(char frase[], int tamanio){
    for (int i = 0; i < tamanio; i++) {
        if(frase[i] >= 97 && frase[i] <= 122){
            frase[i] = frase[i]-32;
        }
    
    }
}
void reverse(char frase[]){
    int tamanio = strlen(frase);

    for (int i = 0; i < tamanio/2; i++) {
        char temporal = frase[i];
        frase[i] = frase[tamanio-1-i];
        frase[tamanio -1 -i]=temporal;
    }

}

void sort(char string1[], char string2[]){
    
    char s1 = string1[0];
    char s2 = string2[0];
    
    int cond;

    if (strcmp(string1, string2) > 0) {
    
    
        char temporal[strlen(string1) + 1];

        strcpy(temporal, string1);
        strcpy(string1, string2);
        strcpy(string2, temporal);
    }
}

void ordenar_strings(char arreglo[][BUFFER], int n) {
    char auxiliar[BUFFER];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {

            if (strcmp(arreglo[j], arreglo[j + 1]) > 0) {
                strcpy(auxiliar, arreglo[j]);
                strcpy(arreglo[j], arreglo[j + 1]);
                strcpy(arreglo[j + 1], auxiliar);
            }

        }
    }
}

int main(void){
    
    char frase_bonita[30] = "Que onda!";

    toUpperCase(frase_bonita, 30);
    printf("%s\n", frase_bonita);

    reverse(frase_bonita);//corregir con nueva variable.  Hacer v2 o usar strcpy
    printf("%s\n", frase_bonita);

    char string1[10]="Hola";
    char string2[10]="Adios";

    sort(string1, string2);
    printf("%s\n", string1);
    printf("%s\n", string2);


    char arreglo_strings[][BUFFER]={"Hola","Qué tal!!","Adiós"};

    int n = sizeof(arreglo_strings) / sizeof(arreglo_strings[0]);

    ordenar_strings(arreglo_strings, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", arreglo_strings[i]);
    }

    return EXIT_SUCCESS;
}
