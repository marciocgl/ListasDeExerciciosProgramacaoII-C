#include <stdio.h>
#include <stdlib.h>

int main ()
{

    FILE * arq ;
    int matriz[3][11] ;
    int l, c, i = 0;
    int v[21];

    printf("Tamanho da matriz -> 3 x 11\n\n");
    printf("Inicializacao da matriz esparsa\n\n");

    for(l = 0 ; l < 3; l++ )
    {
        for(c = 0 ; c < 11; c++ )
        {

            matriz[l][c] = 0 ;

            printf(" %d ",matriz[l][c]);

        }
        printf("\n");
    }

    printf("\n\n");

    arq = fopen("features.mtx","r");
    if (arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo\n\t");
        exit(0);
    }

    //ler a primeira linha do arquivo
    char linhaArq[15];
    //ler a segunda linha do arquivo
    int linhaArq2[3];
    fgets(linhaArq, 15, arq);
    fscanf(arq,"%d %d %d",&linhaArq2[0],&linhaArq2[1],&linhaArq2[2]);


    while(!feof(arq) && i <= 20)
    {

        fscanf(arq," %d %d %d",&l,&c,&v[i]);

        matriz[l-1][c-1] = v[i];

        i++;

    }

    printf("Matriz esparsa com os valores do arquivo 'features.mtx'\n\n");
    for(l = 0 ; l < 3; l++ )
    {
        for(c = 0 ; c < 11; c++ )
        {

            printf(" %d ",matriz[l][c]);

        }
        printf("\n");
    }

    fclose(arq);

    return 0 ;
}
