#include <stdio.h>

int main(void){
    
    int n;
    int var;


    do {
        printf("dame un numero del uno al 10\n");
        scanf("%d", &n);

        if(n < 1 || n>10){
            var = 0;
        } else {
            var = 1;
        } 
    } while (var != 1);

    return 0;
}
