#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 11341 //Quantidade de Pessoas No DataSeet
#define QtdTeste 500 //Alterar para quantidade de arquivos a serem ordenados

typedef struct dataSet
{
    int id;
    char name[45];
    char countryName[45];

} dataSet;

typedef struct Aux
{
    int id;
    char name[45];
    char countryName[45];

} Aux;

int main ()
{
    clock_t tempo;
    int qtdLinha = 0 ;
    int i,j ;
    int qtdTrocas = 0 ;
    dataSet d[MAX] ;
    Aux a ;

    FILE * arq;
    FILE * arq2;

    arq = fopen("testePantheon.tsv","r");
    if(arq == NULL)
    {
        printf("\n\tNao Foi possivel Abrir o arquivo\n");
        exit(0);
    }

    arq2 = fopen("OrdenacaoBurbble.tsv","w");
    if(arq2 == NULL)
    {
        printf("\n\tNao Foi possivel Abrir o arquivo\n");
        exit(0);
    }

    i = 0 ;

    while( fscanf(arq,"%d %[^\n]s %[^\n]s\n",&d[i].id, &d[i].name, &d[i].countryName)!= EOF && qtdLinha < QtdTeste)
    {

        //fprintf(arq2,"%d %s %s\n",d[i].id,d[i].name, d[i].countryName);

        qtdLinha++;
        i++;
    }

    //printf("Qtd Linhas: %d\n",qtdLinha);

    tempo = clock();

    for(i = 0; i < QtdTeste ; i++)
    {
        for(j = i+1; j < QtdTeste ; j++)
        {

            if(strcmp(d[i].name,d[j].name) < 0 )
            {
                a.id = d[i].id;
                strcpy(a.name,d[i].name);
                strcpy(a.countryName,d[i].countryName);
                d[i].id = d[j].id;
                strcpy(d[i].name,d[j].name);
                strcpy(d[i].countryName,d[j].countryName);
                d[j].id = a.id;
                strcpy(d[j].name,a.name);
                strcpy(d[j].countryName,a.countryName);
                qtdTrocas++;
            }

        }
    }

    for( i = 0; i < 99999999; ++i) {}
    //fim
    printf("\n\tTempo: %lf\n\n",(clock() - tempo) / (double)CLOCKS_PER_SEC);

    for(i = 0; i < QtdTeste ; i++)
    {
        fprintf(arq2,"%d %s %s\n",d[i].id,d[i].name, d[i].countryName);
    }

    printf("\tQuantidade de trocas %d\n",qtdTrocas);
    printf("\n\tQuantidade de Registros Lidos: %d\n",QtdTeste);
    fclose(arq2);
    fclose(arq);

    return 0 ;
}
