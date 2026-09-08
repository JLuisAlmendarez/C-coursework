#include <stdio.h>
#include <stdlib.h>

int main () {

    int edad = 23;
    int calificacion = 10;
    char mi_letra_favorita = 'A'; // string es diferente a carácter. // 8 bits
    /* String no esta integrado primeramente en c. Solo existen chars, position labels con ""
     y si una libreria llamada string */
    printf("Hola mundo!\n");
    system("PAUSE");
    int var1 = 5; // ,var2 = 10; 
    int var2 = 10;
    //int ans1 = var1+var2;
    //int ans2 = ans1/3;
    int ans1 = var1+var2, ans2 = ans1/3;
    printf("\t RESULTADOS: %i, %i \n", ans1,ans2);
    char ch = 80;
    printf("%c, %d\n", ch, ch);
    float f = 13579.234567891011121314151617181920;
    printf("%5.3f, %.3e\n",f,f);
    int d = 123;
    printf("%06d", d);
    return 0;
}
