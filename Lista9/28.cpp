#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fp;
	char ch, *token, *resultado, l[82], nomeMaior[50];
	int cont = 0, tam, maior = 0;
	const char t[2] = ",";

	fp = fopen("drinks.csv", "r");

	if(fp == NULL){
		printf("\n\tNao foi possivel abrir o arquivo %s\n", "drinks.csv");
		exit(0);
	}

	// Para não considerar o cabeçalho do arquivo.
	resultado = fgets(l, 82, fp);

	// Para encontrar o tamanho dos nomes dos países.
	while(!feof(fp)){
		resultado = fgets(l, 82, fp);

		// Se a linha tem dados...
		if(resultado){
			// Quando encontra a vírgula, achou o nome do país.
			token = strtok(resultado, t);

			// Obtém o tamanho do nome do país e imprime.
			tam = strlen(token);
			printf("\n\t%s %4d\n", token, tam);

			// Encontra o país com o maior nome.
			if(tam > maior){
				maior = tam;
				strcpy(nomeMaior, token);
			}
		}
	}
	printf("\n\n\tO pais que tem o maior nome eh '%s' com %d letras. \n\n", nomeMaior, maior);
	fclose(fp);
	printf("\n\n");
	//system("Pause");
}
