#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int num[5] = { 5, 10, 22, 1, 22}  ;
    int buscaNum;
    int i = 0;
    int achou = 0;

    printf("Qual numero deseja busca? ");
    scanf("%d",&buscaNum);

    while(!achou && i < 6)
    {

        if(num[i] == buscaNum)
        {
            printf("Achou %d, na posicao [%d]\n",buscaNum,i);
            achou = 1 ;
        }

      i++;


    }

     if(achou == 0){
            printf("\n\tNenhum Numero encontrado\n\t");
        }

    return 0 ;
}
