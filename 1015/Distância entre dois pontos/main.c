#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1,y1;
    double x2,y2;
    double distancia_final;

    scanf("%lf%lf", &x1,&y1);
    scanf("%lf%lf", &x2,&y2);

    distancia_final = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("%.4lf\n", distancia_final);

    return 0;
}
