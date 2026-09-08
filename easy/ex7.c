#include <stdio.h>

int main(){/*
    unsigned int a;
    unsigned int b;
    printf("Dame el primer numero en hexadecimal\n");
    scanf("%x", &a);
    printf("Dame el segundo numero en hexadecimal\n");
    scanf("%x", &b);

    unsigned char c = a^b;
    printf("%d", c);
    */
    int n = 2;
    unsigned int caracter = 0x4D451; 
    unsigned int caracterRotado = caracter >> n + caracter << 8-n;
    printf("%d\n", &caracter);
    printf("%d\n", &caracterRotado);
    unsigned int caracterNoRotado = caracterRotado << 8-n + caracterRotado >> n;
    printf("%d\n", &caracterNoRotado);


    return 0;
}
