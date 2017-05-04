#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define NCHAR 256
int main()
{
    int i, x=0;
    char frase [NCHAR];
    printf ("Digite uma frase:");
    fgets(frase, NCHAR, stdin);
    for (i=0; frase[i] !='\0'; 1++)
       if(isalpha (frase[i]))
        x++;
       printf ("o numero de letras:\n %d",x);
       return EXIT_SUCESS;
}
