#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main()
{
    double A=0, R=0;

    scanf("%lf", &R);
    fflush(stdin);

    A=PI*(R*R);

    printf("A=%.4lf\n", A);


    return 0;
}
