#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

    char nome[10] ;
    char nome2[10] ;

    int i,tam ;

    printf("digite um nome: \n");
    gets(nome);

    strrev(nome);

    strcpy(nome2,nome);

    printf("\n %s ",nome2);


    printf("\n\n");

    system("pause");

    return 0 ;
}
