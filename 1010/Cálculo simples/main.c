#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo_peca1, codigo_peca2, numeros_pecas1, numeros_pecas2;
    double valor_unitario1, valor_unitario2;
    double valor_a_pagar;

    scanf("%d %d %lf", &codigo_peca1, &numeros_pecas1, &valor_unitario1);
    scanf("%d %d %lf", &codigo_peca2, &numeros_pecas2, &valor_unitario2);

    valor_a_pagar = (numeros_pecas1 * valor_unitario1) + (numeros_pecas2 * valor_unitario2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valor_a_pagar);


    return 0;
}
