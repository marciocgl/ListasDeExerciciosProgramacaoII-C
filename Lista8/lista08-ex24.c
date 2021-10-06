#include <stdio.h>
#include <stdlib.h>


int main (){


char c ;
int qtdLinha = 1, qtdCaracteres = 1, qtdPalavras = 1 ,qtdespaco = 0 ;
FILE * arq ;


arq = fopen("hinoNacional.txt","r");


while( (c=fgetc(arq)) != EOF){

    if(c == '\n'){
        qtdLinha++ ; //contando quantidade de linhas
    }if(c == ' ' ||  c == '\n' ){
        qtdPalavras++; // contando quantidade de palvras
    }if(c == ' '){
        qtdespaco ++;
    }

    qtdCaracteres ++; //contando quantidade de caracteres
}

printf("Quantidade de linhas: %d \n",qtdLinha);
printf("Quantidade de palavras: %d \n",qtdPalavras - qtdespaco);
printf("Quantidade de caracteres sem contar os espacos: %d \n",qtdCaracteres - qtdPalavras);
printf("Quantidade de caracteres com espaco: %d \n",qtdCaracteres - qtdLinha);
printf("Quantidade de espacos: %d \n",qtdespaco);



    return 0 ;
}
