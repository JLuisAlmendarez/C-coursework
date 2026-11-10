#include <stdio.h>
#include <stdlib.h>

void imprimir_arreglo(int arreglo[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d", arreglo[i]);
    }
}

/*
void ordenarPorSeleccion(int arreglo[], int n){
    for (int i = 0; i < n-1 ; i++) {
        int indiceElementoMenor = i;
        for (int j = i; j < n ; j++) {
            if (arreglo[j]<arreglo[indiceElementoMenor]){
                indiceElementoMenor = j;
            }
        }
        if (arreglo[i]!=arreglo[indiceElementoMenor]) {
            int temporal = arreglo[i];
            arreglo[i]=arreglo[indiceElementoMenor];
            arreglo[indiceElementoMenor]=temporal;
        }
    
    }

}
*/

void fillArray(int arr[], int foward, int fill){
    for (int i=0;i<foward;i++){
        arr[i] = fill;
    }
}


int main(){
    /*
    int arreglo[] = {2,5,4,3,1,6,9,8,7,0};

    imprimir_arreglo(arreglo, 10);
    ordenarPorSeleccion(arreglo, 10);
    printf("\n");
    imprimir_arreglo(arreglo, 10);
    */
    /*
    int arr[] = {1,2,3,4,5};
    printf("%p\n", (void*)&arr[1]);

    int arr1[][3] = {{1,2,3},{4,5,6}};
    printf("%p\n", (void*)&arr1[1]);

    int arr2[][3] = {{1,2,3},{4,5,6}};
    printf("%p\n", (void*)&arr2[1][0]);

    int arr3[][3] = {{1,2,3},{4,5,6}};
    arr3[1] = 2;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    */
    int arr[10][10] = {
        {12, 45,  7, 89, 23, 56, 34, 91,  3, 67},
        {38, 72, 15, 60,  9, 84, 27, 41, 95, 18},
        {53,  6, 79, 31, 66, 20, 88, 44, 11, 75},
        {29, 97, 42, 14, 58, 83,  2, 69, 36, 51},
        {81, 24, 63, 47, 10, 92, 55, 17, 70, 33},
        { 8, 61, 39, 86, 25, 13, 74, 49, 94, 22},
        {67, 30, 98,  5, 71, 40, 16, 82, 57, 46},
        {19, 85, 52, 77, 37, 64,  1, 28, 43, 90},
        {73, 11, 26, 50, 99, 35, 68, 59, 21,  4},
        {44, 93, 16, 62, 80, 48, 32, 76, 87, 54}
    };

    fillArray(&arr[0][0]+55, 31, 7);

    imprimir_arreglo(&arr[0][0], 100);


    // estudiar & y * 
    

 

    return EXIT_SUCCESS;
}
