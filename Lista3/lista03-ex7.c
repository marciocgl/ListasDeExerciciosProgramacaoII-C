#include <stdio.h>
#include <stdlib.h>


int main ()
{

    char c ;
    FILE * arq1 ;
    FILE * arq2 ;
    FILE * arq3 ;
    FILE * arq4 ;

    arq1 = fopen("nome.txt","r");
    if(arq1 == NULL)
    {
        printf("Arquivo 1 Inexistente");
        exit(0);
    }

    arq2 = fopen("nascimento.txt","r");
    if (arq2 == NULL)
    {
        printf("Arquivo 2 Inexistente");
        exit(0);
    }

    arq3  = fopen("cidade.txt","r");
    if (arq3 == NULL)
    {
        printf("Arquivo 3 Inexistente");
        exit(0);
    }

    arq4 = fopen("ex7.txt","w");
    if (arq4 == NULL)
    {
        printf("Arquivo 4 Inexistente");
        exit(0);
    }

    while ( (c = fgetc(arq1))  != EOF)
    {

        fprintf(arq4, "%c", c);
    }
    fprintf(arq4,"\n");
    while ( (c = fgetc(arq2))  != EOF)
    {
       fprintf(arq4, "%c", c);
    }
    fprintf(arq4,"\ncidade: ");
    while ( (c = fgetc(arq3))  != EOF)
    {
        fprintf(arq4, "%c", c);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    fclose(arq4);

    return 0 ;
}
