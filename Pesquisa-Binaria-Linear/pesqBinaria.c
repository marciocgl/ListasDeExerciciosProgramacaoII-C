#include<stdio.h>
#include<stdlib.h>

int pBinaria (int vetor[], int tamanho, int ehProcurado);

int main(){
	int vet[]= {11, 99, 22, 88, 33, 77, 44, 66, 55}, resp, pesq;

	printf("\n\tDigite o valor a ser pesquisado: ");
	scanf("%d", &pesq);
	
	resp = pBinaria(vet, 9, pesq);

	if(resp != -1){
		printf("\n\tNumero foi encontrado!\n\n");
	}
	else{
		printf("\n\tNumero NAO foi encontrado!\n\n");
	}
	//system("Pause");
}



int pBinaria (int vetor[], int tamanho, int ehProcurado){
	int inf = 0, sup = tamanho - 1, meio;

	while(inf <= sup){
		meio = (inf + sup) / 2;

		if (ehProcurado == vetor[meio]){
			return meio;
		}

		if (ehProcurado < vetor[meio]){
			sup = meio - 1;
		}
		else{
			inf = meio + 1;	
		}
	}

	return -1;
}

