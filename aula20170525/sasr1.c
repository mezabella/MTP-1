#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gera_frase()
{
    int idfrase = rand()%9;
    switch(idfrase)
    {
        case 0: printf("Tudo bem?\n");
        break;
        case 1: printf("Ok \n");
        break;
        case 2: printf("LOL!\n");
        break;
        case 3: printf("Que legal\n");
        break;
        case 4: printf("Que chato\n");
        break;
        case 5: printf("Fale mais sobre isso\n");
        break;
        case 6: printf("Sobre o que quer falar?\n");
        break;
        case 7: printf("Sobre o que quer falar?\n");
        break;
        case 8: printf("Tá bom, eu aceito\n");
        break;
    }
}

int main()
{
    srand (time(NULL));
    return EXIT_SUCCESS;
    char frase [256];
    printf("Bom dia! Quero conversar...\n");
    do
    {
        fgets(frase, 256, stdin);
        responde ();

    }while(frase[0] != '\n');
    printf("tchau, foi um prazer! :-D");


}

