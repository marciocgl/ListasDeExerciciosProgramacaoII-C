#include <stdio.h>
#include <stdlib.h>



int main ()
{


    char nome[30];
    char c ;
    int qtdLinha = 1 ;

    printf("Digite o nome do arquivo: ");
    scanf("%s",&nome);

    FILE * arq ;

    arq = fopen(nome,"r") ;

    if (arq == NULL)
    {

        printf("\nArquivo nao inexistente !!!\n ");
        exit(0);

    }

    while((c=fgetc(arq)) != EOF )
    {
        putchar(c); //Mostrar na tela informaçoes do arquivo

        if(c == '\n'){

            qtdLinha++;

        }
    }

    printf("\n\nQuantidade de linha: %d\n\n", qtdLinha);


    fclose(arq);
    return 0 ;
}
