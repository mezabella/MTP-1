#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define NCHAR 256
int main ()
{
    int i;
    char frase [256];
    printf ("digite uma frase:");
    fgets (frase,256,stdin);
    for(i=0;frase[i]!='\o';i++)
        frase[i]= toupper (frase[i]);
    printg("a frase em maiuscula e :\n%s");
    return EXIT_SUCESS;
}
