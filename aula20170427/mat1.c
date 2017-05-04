#include<stdio.h>
#include<math.h>

int main()
{
    float p1x, p1y, p2x, p2y;
    float distancia;
    printf ("entre com coord x de p1:");
    scanf("%f", &p1x);
    printf ("entre com coord y de p1:");
    scanf("%f", &p1y);
    printf ("entre com coord x de p2:");
    scanf("%f", &p2x);
    printf ("entre com coord y de p2:");
    scanf("%f", &p2y);
    distancia = sqrt (pow(p2x-p1x,2) + pow (p2y-p2y,2));
    printf("o lado e: %g\n", lado);
    return EXIT_SUCESS;
}
