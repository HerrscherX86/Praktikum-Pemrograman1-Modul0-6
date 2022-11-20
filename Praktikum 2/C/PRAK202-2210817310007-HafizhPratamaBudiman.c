#include <stdio.h>

int main()
{
    float n1,n2,h;

printf("Masukkan Nilai Pertama : ");
scanf("%f", &n1);
printf("Masukkan Nilai Kedua   : ");
scanf("%f", &n2);
h=n1+n2;
printf("\nHasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"",n1,n2,h);

}