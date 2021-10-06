#include<stdio.h>
#include<stdlib.h>

int a; /* variavel global */

void func(int a){ /* parametro formal */
     printf("%d\t", a);
     if (a > 2) {
        int a = 7; /* variavel local */
        printf("%d\t", a);
     }
     a += 7;
     printf("%d\t", a);
}

int main(){
    a = 3; /* atribuicao a variavel global */
    func(a);
    printf("%d\t", a);
    puts("\n");
    system("Pause");
    return 0;
}

