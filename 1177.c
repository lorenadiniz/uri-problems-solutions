#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n[1000], i, t;

    scanf ("%d", &t);
    n[0]=0;
    n[1]=1;

    for (i = 2; i < 1000; i++){
    	
        n[i]= i % t;

    }
    for (i = 0; i < 1000; i++){

          printf("N[%d] = %d \n", i, n[i]);
    }
}
