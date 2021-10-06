#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fp;
	char ch, *linha, l[82];
	int cont = 0, maior = 0, tam, i = 0;

	fp = fopen("drinks.csv", "r");

	if(fp == NULL){
		printf("\n\tNao foi possivel abrir o arquivo %s\n", "drinks.csv");
		exit(0);
	}
	
	// Para não imprimir o cabeçalho do arquivo.
	linha = fgets(l, 82, fp);

	// Para imprimir linha a linha os dados.
	linha = fgets(l, 82, fp);
	while(!feof(fp)){
		printf("%s", linha);
		cont++;
		linha = fgets(l, 82, fp);
	}

	printf("\n\nForam impressas %d linhas.\n\n", cont);
	fclose(fp);
	printf("\n\n");
	//system("Pause");
}
