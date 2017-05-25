#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dado()
{
    int d = rand()%10+1;
    return d;

}
int main()
{
    int i, n, d1;
    int k = 10;
    srand(time(NULL));
    do{
        printf("\n Digite um numero entre 1 e 10: ");
        scanf("%d", &n);
        d1=dado
        ();
        printf("\n%d", d1);
        if(d1 == n)
            printf("\nPARABENS!");
        k--;

    } while (k>0);
    return 0;
}
