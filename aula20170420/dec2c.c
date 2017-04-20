#include<stdio.h>

int main()
{
    int numero;
    printf( "Entre com um numero:");
    scanf("%u", &numero);
    if(numero%2 == 0)
       printf("o numero e par!\n");
    else
        printf("o numero e impar!\n");
    return 0;



}
