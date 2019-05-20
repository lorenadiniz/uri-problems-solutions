#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, i;

    scanf ("%d", &n);

    i = 2;

    while (i <= n){
        printf ("%d ^ 2 = %d\n", i, i * i );
        i += 2;
    }
}
