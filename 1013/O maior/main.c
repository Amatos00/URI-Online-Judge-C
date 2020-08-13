#include<stdio.h>
#include<stdlib.h>

 main (){

     system("color 0a");

     int a,b,c,maior,menor;

     scanf("%d", & a);
     scanf("%d", & b);
     scanf("%d", & c);

     maior = a;
     menor = a;

     if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;
     if (c < menor)
        menor = c;
     if (c > maior)
        maior = c;
     printf ("%d eh o maior\n", maior);

     return 0;
     }
