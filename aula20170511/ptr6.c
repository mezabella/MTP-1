#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NCHAR 16
int main()
 {
     int i, *p;
     char string[NCHAR];
     printf("Digite uma frase com 16 caractere: \n");
     fgets(string, NCHAR, stdin);
     p=(int*) string;
     for (i=0; i<sizeof(string)/4; i++)
     printf("\n");
        printf("%x ", p[i]);

     return EXIT_SUCCESS;
 }
