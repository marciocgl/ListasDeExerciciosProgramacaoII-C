#include <stdio.h>
#include <stdlib.h>

#define MAX 11341 // Quantidade de Colunas No Arquivo

typedef struct dataSet
{
    int id;
    char name[45];
    char countryName[45];

} dataSet;

int main ()
{
    char c[100] ;
    char x ;
    int qtdLinha = 0 ;
    int i ;
    dataSet d[MAX] ;

    FILE * arq ;
    FILE * arq2 ;
    //FILE * arq3 ;

    arq = fopen("pantheon.tsv","r");
    if(arq == NULL)
    {
        printf("\n\tNao Foi possivel Abrir o arquivo\n");
        exit(0);
    }

    arq2 = fopen("testePantheon.tsv","w");
    if(arq2 == NULL)
    {
        printf("\n\tNao Foi possivel Abrir o arquivo\n");
        exit(0);
    }

    i = 0 ;

    fgets(c, 100, arq) ;

    while((x = fgetc(arq)) != EOF)
    {

        if(x == '	')
        {
            x = ' ';
        }

        qtdLinha++;

        fprintf(arq2,"%c", x);
    }

    fclose(arq2);
    fclose(arq);
    /*
        arq2 = fopen("testePantheon.tsv","r");
        if(arq2 == NULL)
        {
            printf("\n\tNao Foi possivel Abrir o arquivo\n");
            exit(0);
        }

        arq3 = fopen("testePantheonLeitura.tsv","w");
        if(arq3 == NULL)
        {
            printf("\n\tNao Foi possivel Abrir o arquivo\n");
            exit(0);
        }

        while( fscanf(arq2,"%d %[^\n]s %[^\n]s\n",&d[i].id, &d[i].name, &d[i].countryName)!= EOF )
        {


            fprintf(arq3,"%d %s %s\n",d[i].id,d[i].name, d[i].countryName);
            qtdLinha++;
            i++;
        }


        printf("| %d |",qtdLinha);

        fclose(arq2);
        fclose(arq3);
    */
    return 0 ;
}
