#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int numeros[100];
    int i = 0, j=0 ;
    int busca,encontrado = 0 ;
    int CONTADOR = 1 ;

    FILE * arq ;

    arq = fopen("numeros.dat","w");
    if(arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo \n\t");
        exit(0);
    }

    while(j < 100 )
    {

        if(i % 2 != 0)
        {
            numeros[j] = i;
            j++;
        }
        else
        {

        }

        i++ ;
    }

    for (i = 0 ; i < 100; i++)
    {
        fprintf(arq,"%d ",numeros[i]);
    }

    fclose(arq);

    arq = fopen("numeros.dat","r");
    if(arq == NULL)
    {
        printf("\n\tNao foi possivel acessar o arquivo \n\t");
        exit(0);
    }

    printf("Digite o numero que deseja buscar: ");
    scanf("%d",&busca);

    i = 0;

    while( (fscanf(arq,"%d\n",&numeros[i]))!=EOF ){

			if(numeros[i] == busca){
                encontrado++;
			}if(encontrado != 0){
                return printf("Numero encontrado\n\nQTD BUSCAS: %d\n",CONTADOR);
			}

        i++;
        CONTADOR ++;
    }

        if(encontrado == 0){
                 printf("Numero NAO encontrado\n\nQTD BUSCAS: %d\n",CONTADOR-1);
			}


    fclose(arq);


    return 0 ;
}


/*
    while( (c=fgetc(arq)) != EOF){
        i = 0 ;
        if (c != ' '){
            aux[i] = c ;
            i++;
        }
        if(aux == busca){
           encontrado++;
        }
    }

    if(encontrado != 0){
        printf("Numero Encontrado\n\n");
    }else{
         printf("Numero NAO Encontrado\n\n");
    }
*/
