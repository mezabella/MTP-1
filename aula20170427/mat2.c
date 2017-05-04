#include<stdio.h>
#include<math.h>

int main()
{
    float a,b, r;
    float distancia
    printf ("digite um lado do triangulo:");
    scanf ("%f",&a);
    printf ("digite um lado do triangulo:");
    scanf ("%f", &b);
    printf ("digite o angulo em radianos:");
    scanf("%f", &r);
    x= cos (double r);
    distancia = sqrt (pow (a,2) + pow (b,2) - 2*a*b*x));
    printf("a lado e: %g\n",distancia);
    return EXIT_SUCESS;

}
