#include <stdio.h>

void one_to_ten(){
    int n=1;

    while (n<11) {
        printf("%d\n",n);
        n++;
    }
}

void weird_fib(int n){
    int cnt=1;
    int var1;
    while (cnt <= n) {
        var1 += cnt;
        cnt++;
        printf("%d\n", var1);
    }
}

int main(void){
    //one_to_ten();
    weird_fib(10);

    return 0;
}
