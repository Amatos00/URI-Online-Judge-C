#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tempo, veloc_media;
    double distancia_percorrida;
    double combustivel;

    scanf("%d%d", &tempo, &veloc_media);

    distancia_percorrida = (veloc_media * tempo);

    combustivel = distancia_percorrida/ 12;

    printf("%.3lf\n", combustivel);


    return 0;
}
