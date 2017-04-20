#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main()
{
    float media,a,b,c,d,e;
    printf("digite as notas: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    safeFlush();
    media=(a*2+b*2+c*2+d*3+e*5)/ 2+2+2+3+5;
    printf("media: %3f",media);

    return 0;
}
