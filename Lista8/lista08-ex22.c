#include <stdio.h>
#include <stdlib.h>



int main ()
{


    char nome[30];
    char nome2[30];

    char c ;

    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome);

    FILE * arq ;

    arq = fopen(nome,"r") ;

    if (arq == NULL)
    {

        printf("\nArquivo nao inexistente !!!\n ");
        exit(0);

    }

    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome2);

    FILE * arq2 ;

    arq2 = fopen(nome2,"r") ;

    if (arq2 == NULL)
    {

        printf("\nArquivo nao inexistente !!!\n ");
        exit(0);

    }

    FILE * arq3 ;

    arq3 = fopen("22Final.txt","w") ;

    if (arq3 == NULL)
    {

        printf("\nArquivo nao inexistente !!!\n ");
        exit(0);

    }


    while( (c=fgetc(arq))!= EOF )
    {
      //  putchar(c);
        fprintf(arq3,"%c", c);
    }

    fprintf(arq3,"\n");

    while( (c=fgetc(arq2))!= EOF )
    {
      //  putchar(c);
        fprintf(arq3,"%c", c);

    }




    fclose(arq);
    fclose(arq2);
    fclose(arq3);

    return 0 ;
}
