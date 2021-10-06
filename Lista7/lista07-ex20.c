#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct Competidores
{

    char nome[30] ;
    int nInscricao ;
    int tempo ;

} Competidores[6] ;


void InserirValores(Competidores c)
{

    strcpy(c[0].nome, " Everaldo");
    c[0].nInscricao = 101 ;
    strcpy(c[1].nome, " Renan");
    c[1].nInscricao = 102 ;
    strcpy(c[2].nome, " Tarcisio");
    c[2].nInscricao = 103 ;
    strcpy(c[3].nome, " Diones");
    c[3].nInscricao = 104 ;
    strcpy(c[4].nome, " Cassio");
    c[4].nInscricao = 105 ;
    strcpy(c[5].nome, " Klinger");
    c[5].nInscricao = 106 ;

}

int main ()
{

    int i, verificarMaior ;
    srand(time(NULL));
    Competidores c ;
    InserirValores(c);

    FILE * arq ;

    arq = fopen ("ListaCorrida.txt","w");
    if (arq == NULL)
    {
        printf("\t\nNao foi possivel abrir o arquivo !!\n\t");
        exit(0);
    }

    for(i = 0 ; i < 6; i ++)
    {

        fprintf(arq,"%d | %s \n",c[i].nInscricao,c[i].nome);

    }

    FILE * arq2 ;

    arq2 = fopen ("RESULTADOFINAL.txt","w");
    if (arq2 == NULL)
    {
        printf("\t\nNao foi possivel abrir o arquivo !!\n\t");
        exit(0);
    }


    for(i = 0 ; i < 6; i ++)
    {

        c[i].tempo = rand () % 4000;


        fprintf(arq2,"| %dº Lugar |  %d   |   %s   |  %d  |\n", i+1,c[i].nInscricao,c[i].nome,c[i].tempo);

    }



    return 0 ;
}
