#include <stdio.h>
#include <math.h>
// Consejo que el codigo se autoexplique de alguna manera

/* 6.1
int main (){
    int a,b,c,d;
    float e;
    printf("A:");
    scanf("%d", &a);
    printf("B:");
    scanf("%d", &b);
    printf("C:");
    scanf("%d", &c);
    printf("D:");
    scanf("%d", &d);
    printf("E:");
    scanf("%f", &e);
    float avg = (a+b+c+d+e)/5; // tambien se pudiera hacer 5.00 a esta operacion o haciendo un casting (float) x
    printf("Promedio: %f", avg);
    return 0;
}
*/

/*
int main(){
    int a,b;
    printf("¿A que velocidad vas a manejar? km/h\n");
    scanf("%d", &a);
    printf("¿Que distancia vas a recorrer?\n");
    scanf("%d", &b);
    int horas = b/a;
    int minutos = ((b % a) * 60) / a; 
    printf("Tardaras %d:%d horas con minutos en llegar", horas, minutos);
    return 0; 
}
*/

/*
int main () {
    int num_personas = 0;

    printf("Eres la persona %d\n", num_personas++);
    printf("Eres la persona %d\n", num_personas);

    int x = 4;
    int y = 3 + (x++ + ++x);

    printf("%d",y);
    return 0;
}
*/

int main (){

    float a=1, b=-5, c=6;
    float x1 = (-b + (sqrt(b*b) - (4*(a*c))))/(2*a);
    float x2 = (-b - (sqrt(b*b) - (4*(a*c))))/(2*a);

    printf("%d, %d", x1, x2);
    return 0;
}
