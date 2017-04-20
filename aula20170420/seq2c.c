#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main()
{
    float base, altura, area;
    printf(" base: ");
    scanf("%f", &base);
    safeFlush();
    printf("altura:");
    scanf("%f",&altura);
    safeFlush();
    area = base * altura;
    printf("area= %.2f", area);

    return 0;
}


