#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i;
    unsigned int x= 0xFACA8421;
    unsigned char * p; //byte
    printf ("Endereco: %p | conteudo: %u \n", &x, x); //sizeof retorna tamanho em byte
    p = (unsigned char *) &x; //static_cast
    for (i= 0; i<sizeof(x); i++){
            printf ("Em: %p | ", p+1);
            printf ("Contem: %u ou %c\n", p[i], p[i], p[i]);
    }
       return EXIT_SUCCESS;
}
