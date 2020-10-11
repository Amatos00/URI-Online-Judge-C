#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carrox=60, carroy=90;
    int distancia_km;
    int distancia_do_outro_carro=2;

    scanf("%d", &distancia_km);

    distancia_km = distancia_km * distancia_do_outro_carro;

    printf("%d minutos\n", distancia_km);


    return 0;
}

