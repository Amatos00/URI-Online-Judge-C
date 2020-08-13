#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int distancia_total_percorrida_km;
    double total_de_combustivel_gasto_litros;
    double consumo_medio;


    scanf("%d", &distancia_total_percorrida_km);
    scanf("%lf", &total_de_combustivel_gasto_litros);

    consumo_medio = (distancia_total_percorrida_km)/(total_de_combustivel_gasto_litros);

    printf("%.3lf km/l\n", consumo_medio);


    return 0;
}
