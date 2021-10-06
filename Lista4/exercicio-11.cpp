#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    FILE *fpDados;
    char nomeCompleto[50], endereco[50];
    
    fpDados = fopen("dados.html", "w");
    if(fpDados == NULL){
          printf("\n\tNao foi possivel abrir o arquivo %s\n\n", "dados.html");
          exit(0);
    }
              
    printf("\n\tDigite o seu nome completo: ");
    gets(nomeCompleto);
    
    printf("\n\tDigite o seu endereco: ");
    gets(endereco);
    
    fprintf(fpDados, "%s %s", "<html>", "<body>");
    fprintf(fpDados, "%s %s %s %s %s", "<p>", "Nome: ", "<b>", nomeCompleto, "</b>");
    fprintf(fpDados, "%s %s %s %s %s", "<p>", "Endereco: " "<b>", endereco, "</b>");
    fprintf(fpDados, "%s %s", "</body>", "</html>");
    
    fclose(fpDados);
    
    system("Pause");   
}    
