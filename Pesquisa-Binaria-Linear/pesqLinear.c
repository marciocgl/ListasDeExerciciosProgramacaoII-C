#include<stdio.h>
#include<stdlib.h>

int pLinear(int vetor[], int tamanho, char ehProcurado);

int main(){
	int vet[]= {11, 99, 22, 88, 33, 77, 44, 66, 55}, resp, pesq;

	printf("\n\tDigite o valor a ser pesquisado: ");
	scanf("%d", &pesq);
	
	resp = pLinear(vet, 9, pesq);

	if(resp != -1){
		printf("\n\tNumero foi encontrado!\n\n");
	}
	else{
		printf("\n\tNumero NAO foi encontrado!\n\n");
	}
	//system("Pause");
}


int pLinear(int vetor[], int tamanho, char ehProcurado){
	int i;
	for(i = 0; i < tamanho; i++){
		if(vetor[i] == ehProcurado){
			return i;
		}
	}
	return -1;
}

