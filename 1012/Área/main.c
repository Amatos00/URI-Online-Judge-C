#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14159

int main()
{
    double A, B, C;
    double Area_triangulo, Area_circulo, Area_trapezio, Area_quadrado, Area_retangulo;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    Area_triangulo = (A*C)/2;
    printf("TRIANGULO: %.3lf\n", Area_triangulo);
    Area_circulo = (Pi * (C*C));
    printf("CIRCULO: %.3lf\n", Area_circulo);
    Area_trapezio = (A+B)/2 * C;
    printf("TRAPEZIO: %.3lf\n", Area_trapezio);
    Area_quadrado = B * B;
    printf("QUADRADO: %.3lf\n", Area_quadrado);
    Area_retangulo = A * B;
    printf("RETANGULO: %.3lf\n", Area_retangulo);

    return 0;
}
