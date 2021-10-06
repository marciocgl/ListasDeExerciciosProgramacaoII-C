#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;
    
    printf("%d\t", i++);
    printf("%d\t", i--);
    printf("%d\t", --i);
    printf("%d\t", i);

    i = 6;
    printf("\n %0.1lf \n\n", ++i / 2.0);
    system("Pause"); 
    return 0;
}

