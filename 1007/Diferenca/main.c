#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int A, B, C, D;
    int DI;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    DI = (A*B-C*D);

    printf("DIFERENCA = %d\n", DI);

    return 0;
}
