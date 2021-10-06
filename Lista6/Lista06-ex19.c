#include <stdlib.h>
#include <stdio.h>


struct Funcionario {

    int matriculaFunc;
    char nomeFunc[30];
    float salarioFunc;

};

int main ()
{
int i ;

  struct Funcionario f[3] ;

     FILE * fp ;

    fp = fopen("funcionarios2.dat","w");


    if (fp == NULL)
    {

        printf("\tNao foi possivel abrir o arquivo\n");
        exit(0);
    }


for(i = 0 ; i < 3; i++){

        printf("Digite sua matricula: ");
        scanf("%d",&f[i].matriculaFunc);

        printf("Digite seu nome: ");
        //getchar();
        fflush(stdin);
        scanf("%[^\n]s",f[i].nomeFunc);

        printf("Digite seu salario: ");
        scanf("%f",&f[i].salarioFunc);
}

for(i = 0 ; i < 3; i++){

        fprintf(fp,"%d %s %0.2f\n",f[i].matriculaFunc,f[i].nomeFunc,f[i].salarioFunc);
}

        return 0 ;
    }




