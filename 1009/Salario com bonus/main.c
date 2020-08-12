#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    char nome[20];
    double sal,tot;
    double total;

    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &tot);

    total = (tot * 0.15) + (sal);

    printf("TOTAL = R$ %.2lf\n", total);


    return 0;
}

