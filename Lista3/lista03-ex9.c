#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int i,tam ;
    char letras ;
    char nome[10], letras1[3] ;

    FILE * arq ;


    arq = fopen("nomecompleto.txt","w");

    if(arq == NULL)
    {
        printf("Arquivo 1 Inexistente");
        exit(0);
    }

    printf("Digite o nome: ");
    gets(nome);

   tam = strlen(nome);

       for(i = 0 ; i < tam; i ++)
    {

        letras = nome[i];

        if (letras == 'a')
        {
            strcpy(letras1,"- 2") ;
        }
        else
        {
            strcpy(letras1,"- 1") ;
        }
        fprintf(arq,"%c %s\n",letras,letras1);

    }

    return 0 ;
}
