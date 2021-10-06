#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{

    FILE * arq ;
    FILE * arq2 ;
    char c ;

    arq = fopen("mandrill.csv","r");
    if (arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

      arq2 = fopen("lowerTweetsMandrill.csv","w");
    if (arq2 == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    char l[10] ;
    fgets(l, 10, arq);

    while( (c=fgetc(arq)) != EOF)
    {

        fprintf(arq2,"%c",tolower(c));

    }

    fclose(arq);
    fclose(arq2);

    return 0 ;
}
