#include<stdio.h>
#include<stdlib.h>
#include<math.h>

const double PI = 3.141596;

double calcularArea(double raio) {
  return PI * pow(raio, 2);
}

int main() {
    double raio, area;
    
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    
    area = calcularArea(raio);
    
    printf("Area = %lf\n", area);
    system("Pause");    
    return 0;
}

