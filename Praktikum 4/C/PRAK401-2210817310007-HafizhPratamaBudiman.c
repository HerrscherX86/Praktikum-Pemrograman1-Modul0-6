#include <stdio.h>

int main(void)
{
    int angka,n;
    char simbol;

    scanf("%d %c",&angka, &simbol);
    for (n=1; n<=50; n++) {
        if (n%angka==0){
            printf("%c ",simbol);
        }
        else {
        printf("%d ",n);
        }
    }
}