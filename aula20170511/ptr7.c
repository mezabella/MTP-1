#include<stdio.h>
#include<stdlib.h>
#define NCHAR 256
int main()
 {
     int opc, i;
     char frase[NCHAR];
     long long int numero;
     long long int * p;
     printf("1- criptografar\n");
     printf("2- descriptografar\n");
     scanf ("%d", &opc); getchar();
     if(opc ==1);
     {
         for (i=0; i<NCHAR; i++)
            frase [i] ='\0';
            printf ("Entre com uma frase:\n");
            fgets(frase, NCHAR, stdin);
            printf("criptografando...\n");
            for (i=0; i < sizeof(frase)/ sizeof(long long int); i++)
                printf("%lld", p[i]);
            return EXIT_SUCCESS;

     }
     if (opc == 2)
        printf("Entre com os codigos, '0' para encerrar:\n");
        p = (char *) &numero;
     do{
         scanf("%lld", &numero)

     }while(numero != 0);
     return EXIT_FAILURE;
 }
