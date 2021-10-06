#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Indica o número de registros do conjunto de dados (dataset)
#define DIM 193

// Cria a estrutura para armazenar o dataset
struct drink{
	char pais[28];
	int cerveja, licor, vinho;
	float alcool;
};

int main(){
	FILE *fp;
	char *linha, l[81];
	int i = 0;
	struct drink dados[DIM];

	fp = fopen("drinks.csv", "r");
	if(fp == NULL){
		printf("\n\tNao foi possivel abrir o arquivo %s\n", "drinks.csv");
		exit(0);
	}

	// Para não imprimir o cabeçalho do dataset.
	fseek(fp, 81, SEEK_SET);

	// Lê a primeira linha com dados dos países
	fscanf(fp,"%[^,],%d,%d,%d,%f", dados[i].pais, &dados[i].cerveja, &dados[i].licor, &dados[i].vinho, &dados[i].alcool);

	// Para armazenar os dados 'struct dados'.
	while(!feof(fp)){
		i++;
		fscanf(fp,"%[^,],%d,%d,%d,%f", dados[i].pais, &dados[i].cerveja, &dados[i].licor, &dados[i].vinho, &dados[i].alcool);
	}
	// Fecha o arquivo no modo leitura.
	fclose(fp);

	i = 0;

	// Para imprimir os dados da 'struct dados'.
/*	while(i < DIM){
		printf("%s,%d,%d,%d,%0.1f", dados[i].pais, dados[i].cerveja, dados[i].licor, dados[i].vinho, dados[i].alcool);
		i++;
	}*/
	printf("\n");
	FILE *fp2;
	fp2 = fopen("total_litres_of_alcohol_servings.csv", "w");
	if(fp2 == NULL){
		printf("\n\tNao foi possivel abrir o arquivo %s\n", "drinks.csv");
		exit(0);
	}

	for(i = 0; i < DIM; i++){
        fprintf(fp2, "%0.4f\n", dados[i].alcool);
	}

	fclose(fp2);
	//system("Pause");
}


