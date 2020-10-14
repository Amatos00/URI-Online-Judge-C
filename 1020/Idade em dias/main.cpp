#include <iostream>
#include <stdio.h>
//using namespace std;

int main()
{
    int x;
    //cout << "Hello world!" << endl;
    scanf("%i", &x);
    int ano = x/365;
    int mes = (x%365)/30;
    int dia = (x%365)%30;
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);
    return 0;
}
