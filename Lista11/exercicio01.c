#include <stdio.h>
#include <stdlib.h>

int main ()
{

    FILE * arq ;
    FILE * arq2 ;
    char c ;
    int linha = 0 ;

    arq = fopen("mandrill.csv","r");
    if (arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    while( (c=fgetc(arq)) != EOF)
    {

        if(c == '\n')
        {
            linha++;
        }

    }

    fclose(arq);

    arq2 = fopen("totalTweetsMandrill.csv","w");
    if (arq2 == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    fprintf(arq,"A quantidade de linhas do arquivo mandrill eh: %d",linha-1);

    fclose(arq2);

    return 0 ;
}
