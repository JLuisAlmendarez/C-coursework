#include <stdio.h>


int fibbonacci (int numero){
    
    if (numero <= 0){
        return 0;
    }
    if (numero == 1){
        return 1;
    }

    return fibbonacci(numero-1)+fibbonacci(numero-2);
}

int main(void) {

    int fib = fibbonacci(3);

    printf("%d", fib);

}
