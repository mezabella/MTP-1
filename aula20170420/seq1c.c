#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main()
{
    float lado_quadrado;
    float area_quadrado;
    printf ("Entre com o lado do quadrado:");
    scanf ("%f",&lado_quadrado);
    safeFlush();
    area_quadrado = lado_quadrado*lado_quadrado;
    printf("A area do quadrado e: %.2f",
           area_quadrado);
    return 0;
}
