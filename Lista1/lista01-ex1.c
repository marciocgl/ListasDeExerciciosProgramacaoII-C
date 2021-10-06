#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int n = -1;
    float total = 0.0 ;

    while (n != 0)
    {

        printf("\ndigite um numero: \n");
        scanf("%d",&n);

        total = pow(n,2) ;
        //total = n *n ;

        printf("\nO quadrado do numero digitado eh: %.f\n", total);

    }


    return 0 ;
}
