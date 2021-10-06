#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 194

struct DataSeet
{

    char nome[50];
    int cerveja;
    int licor;
    int vinho;
    float alcool;

};

struct Aux
{

    char nome[50];
    int cerveja;
    int licor;
    int vinho;
    float alcool;

};

int main ()
{

    FILE * arq ;
    FILE * arq2 ;
    int i,j ;
    char l[100];

    struct DataSeet d[max] ;
    struct Aux a ;

    arq = fopen("drinks.csv","r");
    if (arq == NULL)
    {
        printf("Nao foi possivel abrir o arquivo\n\n");
        exit(0);
    }

    arq2 = fopen("beer_servings_top_10.csv","w");
    if (arq == NULL)
    {
        printf("Nao foi possivel abrir o arquivo\n\n");
        exit(0);
    }

    fgets(l, 100, arq);


    i= 0 ;
    while (fscanf(arq," %[^,],%d,%d,%d,%f",d[i].nome,&d[i].cerveja,&d[i].licor,&d[i].vinho,&d[i].alcool) != EOF )
    {

        //fprintf(arq2,"%s \n",d[i].nome);
        //printf("%s %d,%d,%d,%0.1f\n",d[i].nome, d[i].cerveja, d[i].licor, d[i].vinho, d[i].alcool);


        i++;
    }

    for(i = 0; i < max ; i ++)
    {
        for(j = i+1; j < max ; j ++)
        {

            if(d[i].cerveja < d[j].cerveja)
            {
                strcpy(a.nome,d[i].nome) ;
                a.cerveja = d[i].cerveja;
                a.licor = d[i].licor;
                a.vinho = d[i].alcool;
                strcpy(d[i].nome,d[j].nome);
                d[i].cerveja = d[j].cerveja;
                d[i].licor = d[j].licor;
                d[i].vinho = d[j].vinho;
                d[i].alcool = d[j].alcool;
                strcpy(d[j].nome,a.nome);
                d[j].cerveja = a.cerveja;
                d[j].licor = a.licor;
                d[j].vinho = a.vinho;

            }

        }

    }

    for(i = 0 ; i < 10; i++ )
    {

        fprintf(arq2,"%s %d,%d,%d,%0.1f\n",d[i].nome, d[i].cerveja, d[i].licor, d[i].vinho, d[i].alcool);
    }


    fclose(arq);
    fclose(arq2);
    return 0 ;
}


