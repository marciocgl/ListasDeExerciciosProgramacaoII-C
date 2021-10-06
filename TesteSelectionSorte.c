#include <stdio.h>
#include<stdlib.h>

int main ()
{

    int i, j, min, aux;
    int tam = 10;
    int num[10];

    for (i = 0; i < 10; i++)
    {

        num[i] = rand() % 100 ;

        printf("|%d|",num[i]);
    }

    for (i = 0; i < (tam-1); i++)
    {
        min = i;
        for (j = (i+1); j < tam; j++)
        {
            if(num[j] < num[min])
                min = j;
        }
        if (num[i] != num[min])
        {
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {

        printf("|%d|",num[i]);
    }
    return 0 ;
}
