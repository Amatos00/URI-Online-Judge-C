#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int Fun, horastra;
    double Salario,salarioporhora;

    scanf("%d", &Fun);
    scanf("%d", &horastra);
    scanf("%lf", &salarioporhora);

    Salario = (horastra*salarioporhora);
    printf("NUMBER = %d\n", Fun);
    printf("SALARY = U$ %.2lf\n", Salario);

    return 0;
}

