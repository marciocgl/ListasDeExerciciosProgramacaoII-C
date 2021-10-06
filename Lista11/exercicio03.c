#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{

    FILE * arq ;
    FILE * arq2 ;
    char c ;

    arq = fopen("lowerTweetsMandrill.csv","r");
    if (arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

      arq2 = fopen("cleanTweetsMandrill.csv","w");
    if (arq2 == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    while( (c=fgetc(arq)) != EOF)
    {

        if(c != '.' && c != ':' && c !='?' && c != '!' && c != ';' && c != ',' &&
         c != '\\' && c != '(' && c != ')' && c != '-' && c != '_' && c != '#'){

             fprintf(arq2,"%c",c);
        }


    }

    fclose(arq);
    fclose(arq2);

    return 0 ;
}
