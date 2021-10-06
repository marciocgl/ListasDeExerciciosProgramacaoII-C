#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{	
	int validar ; 
    int i,tam ;
    char letras ;
    char nome[10],nome2[10], letras1[3];
   

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

    do
    {
        printf("\nDigite o nome: ");
        gets(nome2);

        if (stricmp(nome,nome2)== 0)
        {
            printf("Pfvr Digite um nome Diferente! \n");
            validar = 0 ;

        }
        else
        {
            validar = 1 ;
        }
    }
    while (validar != 1);

    tam = strlen(nome2);

    fprintf(arq,"\n");

    for(i = 0 ; i < tam; i ++)
    {

        letras = nome2[i];

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
