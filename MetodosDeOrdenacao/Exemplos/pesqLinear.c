#include<stdio.h>
#include<stdlib.h>

int pLinear(int vetor[], int tamanho, char ehProcurado);
int contaTest = 1 ;

int main(){
	int vet[]= {11, 99, 22, 88, 33, 77, 44, 66, 55}, resp, pesq,ContaTest = 0;

	printf("\n\tDigite o valor a ser pesquisado: ");
	scanf("%d", &pesq);

	resp = pLinear(vet, 9, pesq);

	if(resp != -1){
		printf("\n\tNumero foi encontrado! Na posicao [%d] do vetor\n\n",resp);
	}
	else{
		printf("\n\tNumero NAO foi encontrado!\n\n");
	}
	//system("Pause");
    printf("\n\tquantidade de vezes na busca: %d\n\n",contaTest);

    return 0 ;
}


int pLinear(int vetor[], int tamanho, char ehProcurado){
	int i ;
	for(i = 0; i < tamanho; i++){
		if(vetor[i] == ehProcurado){
			return i;
		}
		contaTest++;
	}
	return -1;
}

