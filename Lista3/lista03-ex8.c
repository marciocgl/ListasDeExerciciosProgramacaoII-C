#include <stdio.h>
#include <stdlib.h>


int main ()
{

    char c ;
    FILE * arq ;
    FILE * arq2 ;

    arq = fopen("cidade.txt","a+b");
    if(arq == NULL)
    {
        printf("Arquivo Inexistente");
        exit(0);
    }

    fprintf(arq,"Marataizes");

    arq2 = fopen("cidade.txt","r");
    if(arq2 == NULL)
    {
        printf("Arquivo Inexistente");
        exit(0);
    }

    printf("Cidade: ");
    while ( (c=fgetc(arq2)) != EOF ){

        putchar(c);
    }

    fclose(arq);
    fclose(arq);

    return 0 ;
}
