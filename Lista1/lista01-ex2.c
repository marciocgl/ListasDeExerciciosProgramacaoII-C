#include <stdio.h>
#include <stdlib.h>


int main ()
{

    int n, total = 0 ;

    while (n != 0)
    {

        printf("\ndigite um numero: \n");
        scanf("%d",&n);

        total = total + n ;


    }

    printf("\nO total dos numeros digitados eh: %d\n", total);

    return 0 ;
}
