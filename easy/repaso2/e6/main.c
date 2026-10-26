#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    for (int i=1;i<101;i++) {
        printf("i = %d\n", i);
    }
    
    for (int i=1;i<5+1;i++) {
        printf("i= %d\n", i);
        for (int j=1;j<10+1;j++) {
            printf("j = %d\n", j);
        }
    }
    */

    for (int i=1;i<50+1;i++) {
        if (i%3==0) {
            printf("%d\n", i);
        }
    }

    return EXIT_SUCCESS;
}
