#include<stdio.h>
#include<stdio.h>

void pares(int n)
{
    int i;
    printf("\nNumeros pares:");
    for(i=1; i<=n; i++)
        if (i%2 ==0)
        printf("%d", i);
}
void impares (int n)
{
    int i;
    printf("\nNumeros impares: ");
    for(i=1; i<=n; i++)
        if (i%2 !=0)
        printf("%d",i);
}
int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    pares(n);
    impares(n);
    return 0;
}
