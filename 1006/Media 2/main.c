#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double A, B, C;
    double Media;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    Media = (A*2+B*3+C*5)/10;


    printf("MEDIA = %.1lf\n", Media);

    return 0;
}
