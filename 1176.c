#include <stdio.h>
#include <stdlib.h>

int main () {

    unsigned long long int t, i, n[61], x;
    i = 0;
    scanf("%llu", &t);

        n[0] = 0;
        n[1] = 1;

    for(i = 2; i < 61; i++){

        n[i] = n[i - 1] + n[i - 2];
        }
    for (i = 0; i < t; i++){
        scanf("%llu", &x);
        printf("Fib(%llu) = %llu\n", x, n[x]);

        }
            }
