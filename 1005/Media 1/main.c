#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double A, B;
    double Media;

    scanf("%lf", &A);
    scanf("%lf", &B);

    Media = (A*3.5+B*7.5)/11;


    printf("MEDIA = %.5lf\n", Media);

    return 0;
}
