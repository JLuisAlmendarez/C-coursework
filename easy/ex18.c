#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#define A 'a'
#define B 'z'
*/

/*
int NUM_MINUSCULAS(char a, char b){
    int count = 0;

    for (int i = a; i <= b; i++) {
        count++;
    }

    return count;
}
*/

int main(void){/*
    

    int calificaciones[5];
    char nombre[10];
    scanf("%s",nombre);
    printf("%s", nombre);
    for (int i = 0;i < 5; i++) {
        scanf("%d",&calificaciones[i]);
    }
    
    int suma = 0;

    for (int i = 0;i < 5; i++) {
        suma+=calificaciones[i];
    }
    float promedio = (float)suma / 5;
    printf("%f", promedio);
    int count;
    
    int num = NUM_MINUSCULAS(A, B);
    printf("%d\n",num);
    
    for (int i = A;i<=B;i++) {
        printf("%c", i);
    }*/

    srand(time(NULL));

    int count = 1;
    int num;
    char random_num[100];
    int i = 0;
    while (count <= 100) {
        num = rand()%10;
        random_num[i] = num+'0';
        i++;
        count++;
    }

    printf("%s\n", random_num);

    char k='0';
    char l='0';
    int sum;

    for (int i = 0;i < 100; i++) {
        if (random_num[i] > k) {
        k = random_num[i];
    }
    if (random_num[i] < l) {
        l = random_num[i];
    }
    sum += random_num[i]-'0'; 

    }

    printf("%c\n",k);
    printf("%c\n",l); 
    printf("%d\n",sum);

    return EXIT_SUCCESS;
}
