#include <stdio.h>
#include <stdlib.h>


int main ()
{

int i ,vendas[5];
int maiorVendas = -1 ;


for(i = 1 ; i <= 5; i++){

    printf("\ndigite a quantidade de vendas no dia %d : \n",i);
    scanf("%d",&vendas[i]);


    if(vendas[i]>=maiorVendas){
             maiorVendas = vendas[i];
}

printf("Maior venda foi : %d \n",maiorVendas);

}
    return 0 ;



}
