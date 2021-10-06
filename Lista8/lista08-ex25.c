#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{


    char c ;

    FILE * arq ;
    FILE * arq2 ;

    arq = fopen("hinoNacional.txt","r");
    if(arq == NULL)
    {
        printf("Nao foi possivel abrir o arquivo !! \n");
        exit(0);
    }

    arq2 = fopen("hinoNacionalVogal.txt","w");
    if(arq2 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo !! \n");
        exit(0);
    }

    while( (c=fgetc((arq))) != EOF)
    {

        if(tolower(c) == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
        {

            c = '#' ;


        }

        fprintf(arq2,"%c",c);
    }

    fclose(arq);
    fclose(arq2);
    return 0 ;
}





