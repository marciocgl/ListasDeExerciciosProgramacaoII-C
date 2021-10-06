#include <stdio.h>
#include <stdlib.h>

int main ()
{

    FILE * arq ;
    FILE * arq2 ;
    char c ;

    arq = fopen("cleanTweetsMandrill.csv","r");
    if (arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    arq2 = fopen("tokensTweetsMandrill.csv","w");
    if (arq2 == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    while( (c=fgetc(arq)) != '\n')
    {


        if(c == ' ')
        {

            fprintf(arq2,"\n");

        }

        else
        {
            fprintf(arq2,"%c",c);
        }


    }


    fclose(arq);
    fclose(arq2);


    return 0 ;
}
