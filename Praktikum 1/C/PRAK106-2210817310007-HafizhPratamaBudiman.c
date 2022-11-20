#include<stdio.h>
int main()
{
    int a,b,c;
    a=4;
    b=8;
    c=3;

printf("Variabel A bernilai %d\n", a);
printf("Variabel B bernilai %d\n", b);
printf("Variabel C bernilai %d\n", c);
printf("Apakah A sama dengan B ? ");
    if (a==b) {
        printf("Jawabannya adalah 1");
    }
    else {
        printf("Jawabannya adalah 0");
    }
printf("\nApakah B lebih besar dari C ? ");
    if (b>c) {
        printf("Jawabannya adalah 1");
    }
    else {
        printf("Jawabannya adalah 0");
    }
printf("\nApakah A tidak sama dengan C ? ");
    if (a!=c) {
        printf("Jawabannya adalah 1");
    }
    else {
        printf("Jawabannya adalah 0");
    }
}