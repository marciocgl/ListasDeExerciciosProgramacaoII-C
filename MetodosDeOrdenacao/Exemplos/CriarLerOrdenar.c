#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa
{
    int id ;
    char nome[30];
    int cpf ;

} ;

struct ArmazenarPessoa
{
    int id ;
    char nome[30];
    int cpf ;

} ;

struct aux
{
    int id ;
    char nome[30];
    int cpf ;

} ;
int main ()
{

    struct Pessoa p[3];
    struct ArmazenarPessoa a[3];
    struct aux x ;

    FILE * arq ;
    FILE * arq2 ;
    FILE * arq3 ;

    int i,j ;

    arq = fopen("pessoa.txt","w");
    if(arq == NULL)
    {

        printf("Nao foi possivel acessar o arquivo 1!!\n\n");
        exit(0);
    }

    for (i = 0; i < 3 ; i ++)
    {

        printf("\nID: ");
        scanf("%d",&p[i].id);
        printf("\nNome: ");
        getchar();
        gets(p[i].nome);
        printf("\nCPF: ");
        scanf("%d",&p[i].cpf);

        fprintf(arq,"%d %s %d\n",p[i].id,p[i].nome,p[i].cpf);
    }

    fclose(arq);


    arq2 = fopen("pessoa.txt","r");
    if(arq2 == NULL)
    {

        printf("Nao foi possivel acessar o arquivo 2!!\n\n");
        exit(0);
    }

    i = 0;

    while ( (fscanf(arq2," %d %s %d", &a[i].id, a[i].nome, &a[i].cpf)) != EOF)
    {

        i++;
    }

    fclose(arq2);


    arq3 = fopen("pessoaOrdedana.txt","w");
    if(arq3 == NULL)
    {

        printf("Nao foi possivel acessar o arquivo 3!!\n\n");
        exit(0);
    }

    for (i = 0; i < 3 ; i ++)
    {
        for (j = i+1; j < 3  ; j ++)
        {
            if(a[i].id < a[j].id){
                x.id = a[i].id;
                strcpy(x.nome,a[i].nome);
                x.cpf = a[i].cpf;

                a[i].id = a[j].id;
                strcpy(a[i].nome,a[j].nome);
                a[i].cpf = a[j].cpf;

                a[j].id = x.id;
                strcpy(a[i].nome,x.nome);
                a[i].cpf = x.cpf;


            }


        }
        fprintf(arq3,"%d %s %d\n",a[i].id,a[i].nome,a[i].cpf);
    }

    fclose(arq3);
    return 0 ;
}
