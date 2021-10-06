#include<stdio.h>
#include<stdlib.h>

int a() { return 0; }
int b() { return 1; }
int c() { return 0; }
int d() { return 1; }

int main(){
    printf("%d\t", a() & b() & c() & d());
    printf("%d\t", a() && b() && c() && d());
    printf("%d\t", a() || b() || c() || d());
    
    puts("\n");
    system("Pause");
    return 0;
}

