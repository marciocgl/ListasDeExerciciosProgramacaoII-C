#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i = 0,j = 0,linha = 0,cont;
    char c,aux,matriz[251][40],auxC[40];

    FILE * fp,*fp2,*fp3;
    fp = fopen("hinoNacional.txt","r");

    if(fp == NULL){
        printf("\n\nErro, Arquivo nao encontrado,%s\n","hinoNacional.txt");
    }

    fp2 = fopen("palavraHinoNacional.txt","w+");

    if(fp == NULL){
        printf("\n\nErro, Arquivo nao encontrado,%s\n","palavraHinoNacional.txt");
    }

        aux = '@';
        c = tolower(getc(fp));  // ou c = getc(fp) c = tolower(c)
	do{
        if(c == '\n' && aux == '\n'){
          c = tolower(getc(fp));
          aux = '@';
            }else if(c == '\n'){
              aux = c;
              fprintf(fp2,"\n");
              c = tolower(getc(fp));
			    }else if(c != ' '){
                  aux = '@';
                  fprintf(fp2,"%c",c);
                  c = tolower(getc(fp));
				    }else{
                     fprintf(fp2,"\n");
                     c = tolower(getc(fp));
					 }

       }while(!feof(fp)); //   ou   c != EOF

		rewind(fp2);

		c = getc(fp2);

	while(c != EOF){  // !=feof(fp) n funcionou..
		if(c =='\n'){
			linha++;
			c = getc(fp2);
		}else{
		c = getc(fp2);
		}

	}

		rewind(fp2);
        printf("%d",linha);

	for(i=0;i<=linha;i++){
		/*fgets(matriz[i],40,fp2); com isso nao conta a ultima linha,BRASIL e
		contada como separada,acho que e por causa do \n ,EOF ou os dois juntos...
		*/
        fscanf(fp2,"%s",matriz[i]);
	}


	fp3 = fopen("QuantidadePalavraHinoNacional.txt","w");

    if(fp == NULL){
        printf("\n\nErro, Arquivo nao encontrado,%s\n","QuantidadePalavraHinoNacional.txt");
    }

	for(i=0;i<=linha;i++){
		printf("%s\n",matriz[i]);
	}

    /*
    A função strcmp() recebe duas string para ser comparadas e vai ter 3 possíveis retornos:
    menor que 0: quando encontrar um carácter diferente nas strings
    e esse carácter da primeira String for menor que da segunda String. (antes)

    igual a 0: quando são iguais.

    maior que 0: quando encontrar um carácter diferente nas strings
    e esse carácter da primeira String for maior que da segunda String. (depois)
	*/
	for(i = 0;i<=linha;i++){
			for(j=i+1;j<=linha;j++){
				if(strcmp(matriz[i],matriz[j])>0){ // ou strcoll(str1, str2)
					strcpy(auxC,matriz[i]);
					strcpy(matriz[i],matriz[j]);
					strcpy(matriz[j],auxC);
				}

			}

	}



	rewind(fp2);

    // stricmp para comparar ignorando letras maiúsculas/minúsculas

for(i=0;i<=linha;i++){
		cont = 1;
        if(strcmp(matriz[i],"@@@")!=0){
            for(j=i+1;j<=linha;j++){
                if(strcmp(matriz[i],matriz[j])==0){
                    strcpy(matriz[j],"@@@");
                    cont++;

                }else{
                }

            }

            fprintf(fp3,"%d %s\n",cont,matriz[i]);
        }else{
        }

    }
		// ou
    /*while(fgets(nome,50, fp2) != NULL){
        printf("%s",nome);

    }*/


    fclose(fp3);

    fclose(fp2);

    fclose(fp);

    return 0;
}
