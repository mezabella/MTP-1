#include<stdio.h>
#include<stdlib.h>

int main(){
    int T[10], R[10],i, j=9;
    printf ("Digite 10 numeros:");
    for (i=0; i<10; i++)
    {
        printf ("V(%d)=", i+1);
        scanf ("%d", &T[i]);
    }
    for (i=0; i<10; i++)
    {
        R[i] = T[j];
        j--;
    }
    for(i=0;i<10;i++)
        printf ("O reversoe: %d", R[i]);
    return 0;
}
