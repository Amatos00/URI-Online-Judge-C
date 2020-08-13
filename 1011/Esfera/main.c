#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14159

int main()
{
    float Raio;
    double volume;

    scanf("%f", &Raio);

    volume = (4/3.0)*(Pi)*(Raio*Raio*Raio);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
