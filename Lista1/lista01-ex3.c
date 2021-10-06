#include <stdio.h>
#include <stdlib.h>


int main ()
{

    int n, total = 1 ;
    int i ;

    printf("\ndigite um numero a ser fatorado: \n");
    scanf("%d",&n);

    for (i = n; i >= 1 ; i--)
    {

        total = total * i ;

    }

    printf("\nO fatorial do numero digitado eh: %d\n", total);

    return 0 ;
}
