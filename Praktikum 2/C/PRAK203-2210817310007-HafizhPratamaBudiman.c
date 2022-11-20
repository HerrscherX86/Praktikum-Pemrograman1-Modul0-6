#include <stdio.h>

int main()
{
    float a,b,i,j,x,y,h;

printf("Masukkan Nilai A : ");
scanf("%f", &a);
printf("Masukkan Nilai B : ");
scanf("%f", &b);
printf("Masukkan Nilai I : ");
scanf("%f", &i);
printf("Masukkan Nilai J : ");
scanf("%f", &j);
printf("Masukkan Nilai X : ");
scanf("%f", &x);
printf("Masukkan Nilai Y : ");
scanf("%f", &y);

h=(a-b)*(i/j)-(x+y);

printf("hasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah : %.3f",h);
}