#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int quantidade, numeros, contador, pares;
    contador = 0;
    quantidade = 5;
    pares = 0;

    while (contador<quantidade)
    {
        scanf("%d", &numeros);

        if(numeros%2 == 0)
        {
            pares = pares + 1;
        }
        contador++;
    }
    printf("%d valores pares\n", pares);
}
