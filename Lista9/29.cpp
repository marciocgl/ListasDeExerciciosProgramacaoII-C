#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fp;
	char ch, *token, *resultado, l[82];
	int cont = 0;
	const char t[2] = ",";

	fp = fopen("drinks.csv", "r");

	if(fp == NULL){
		printf("\n\tNao foi possivel abrir o arquivo %s\n", "drinks.csv");
		exit(0);
	}

	// Para não imprimir o cabeçalho do arquivo.
	resultado = fgets(l, 82, fp);

	// Para imprimir os dados como "struct".
	while(!feof(fp)){
		resultado = fgets(l, 82, fp);

		// Se a linha tem dados...
		if(resultado){
			// Quando encontra a vírgula, achou o nome do país.
			token = strtok(resultado, t);
		}
		
		// Enquanto não encontra o fim da linha...
		while(token != NULL){
			printf("%s\n", token);
			token = strtok(NULL, t);// Continua token na mesma linha.
		}
	}
	
	fclose(fp);
	printf("\n\n");
	//system("Pause");
}
