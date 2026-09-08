/*
const float
short int
long int
long int
long double float

unsigned char
unsigned int 
unsigned short int
*/
#include <stdio.h>

int main(){

    char character;
    short int entero_chiquito;
    int entero;
    long int entero_grandote;
    long long int entero_grandotototote;

    printf("Un char mide %i byte\n", sizeof(character));
    printf("Un short int mide %i byte\n", sizeof(entero_chiquito));
    printf("Un int mide %i byte\n", sizeof(entero));
    printf("Un long int mide %i byte\n", sizeof(entero_grandote));
    printf("Un long int mide %i byte\n", sizeof(entero_grandotototote));

    return 0;
}

