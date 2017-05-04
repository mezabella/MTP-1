#include<stdio.h>
#include<stdlib.h>
#include<complex.h>

int main()
{
    double complex a, b, z;
    double ra, rb, ia, ib;
    printf ("bff,entre com real a:");
    scanf("1f",&ra);
    printf ("bff,entre com imag a:");
    scanf("1f",&ia);
    printf ("bff,entre com real b:");
    scanf("1f",&rb);
    printf ("bff,entre com imag b:");
    scanf("1f",&ib);
    a = ra + I*ia;
    b = rb + I*ib;
    z = a + b;
    printf("a soma e %1f + I*1f\n", creal (z), cimag (z));
    printf ("ou igual a %1f<%1f rad\n", cabd(z), carg(z));
    return EXIT_SUCESS;
}
