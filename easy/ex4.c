#include <stdio.h>

int main(){

    int dd, mm, yyyy;
    printf("Ingresa el dia\n");
    scanf("%d", &dd);
    printf("Ingresa el mes\n");
    scanf("%d", &mm);
    printf("Ingresa el año\n");
    scanf("%d", &yyyy);
    printf("%d/%d/%d\n", dd,mm,yyyy);

    float var1 = 1.123;
    double var2 = 3.643;
    float res1 = var1 + var2;
    printf("%.3f", res1);
    return 0;
}
