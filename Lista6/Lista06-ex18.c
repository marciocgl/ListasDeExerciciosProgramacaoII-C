#include <stdlib.h>
#include <stdio.h>



int main ()
{

    int matriculaFunc[3];
    char nomeFunc[3][30];
    float salarioFunc[3];
    int i ;

    FILE * fp ;

    fp = fopen("funcionarios.dat","w");


    if (fp == NULL)
    {

        printf("\tNao foi possivel abrir o arquivo\n");
        exit(0);
    }

for(i = 0 ; i < 3; i++){

        printf("Digite sua matricula: ");
        scanf("%d",&matriculaFunc[i]);

        printf("Digite seu nome: ");
        //getchar();
        getchar();
        scanf("%[^\n]s",nomeFunc[i]);

        printf("Digite seu salario: ");
        scanf("%f",&salarioFunc[i]);
}

for(i = 0 ; i < 3; i++){

        fprintf(fp,"%d %s %0.2f\n",matriculaFunc[i],nomeFunc[i],salarioFunc[i]);
}

        return 0 ;
    }
