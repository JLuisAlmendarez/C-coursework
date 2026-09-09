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
    unsigned int caracter = 0xBC614E; //scanf(num) to -> hex
    printf("Valor Original:\n");
    printf("%x\n", caracter);
    printf("%u\n", caracter);
    printf("%b\n\n", caracter);

    unsigned int caracterRecorridoDerechaEnc = caracter >> n;
    unsigned int caracterRecorridoIzquierdaEnc = caracter << (32-n);
    unsigned int caracterEncriptado = caracterRecorridoDerechaEnc + caracterRecorridoIzquierdaEnc;
    
    printf("Valor Encriptado:\n");
    printf("%x\n", caracterEncriptado);
    printf("%u\n", caracterEncriptado);
    printf("%b\n\n", caracterEncriptado);

    unsigned int caracterRecorridoIzquierdaDenc = caracterEncriptado << n;
    unsigned int caracterRecorridoDerechaDenc = caracterEncriptado >> (32-n);
    unsigned int caracterDesencriptado = caracterRecorridoIzquierdaDenc + caracterRecorridoDerechaDenc;

    printf("Valor Desencriptado:\n");
    printf("%x\n", caracterDesencriptado);
    printf("%u\n", caracterDesencriptado);
    printf("%b\n\n", caracterDesencriptado);

    return 0;
}
