#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char ch;

	fp = fopen("drinks.csv", "r");

	if(fp == NULL){
		printf("\n\tNao foi possivel abrir o arquivo %s\n", "drinks.csv");
		exit(0);
	}
	
	ch = getc(fp);
	while(!feof(fp)){
		printf("%c", ch);
		ch = getc(fp);
	}

	printf("\n\n");
	fclose(fp);
	//system("Pause");
}
