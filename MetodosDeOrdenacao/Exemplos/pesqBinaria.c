#include<stdio.h>
#include<stdlib.h>

int pBinaria (int vetor[], int tamanho, int ehProcurado);
int contaTest = 1 ;

int main()
{
    int vet[]= {11, 22, 33, 44, 55, 66, 77, 88, 99}, resp, pesq;

    printf("\n\tDigite o valor a ser pesquisado: ");
    scanf("%d", &pesq);

    resp = pBinaria(vet, 9, pesq);

    if(resp != -1)
    {
        printf("\n\tNumero foi encontrado! Na posicao [%d]\n\n",resp);
    }
    else
    {
        printf("\n\tNumero NAO foi encontrado!\n\n");
    }
    //system("Pause");
    printf("\n\tquantidade de vezes na busca: %d\n\n",contaTest);

    return 0 ;
}

int pBinaria (int vetor[], int tamanho, int ehProcurado)
{
    int inf = 0, sup = tamanho - 1, meio;

    while(inf <= sup)
    {
        meio = (inf + sup) / 2;

        if (ehProcurado == vetor[meio])
        {
            return meio;
        }

        if (ehProcurado < vetor[meio])
        {
            sup = meio - 1;
        }
        else
        {
            inf = meio + 1;
        }

        contaTest ++;
    }

    return -1;
}

