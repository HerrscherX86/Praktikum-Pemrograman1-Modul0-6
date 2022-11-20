#include <stdio.h>

int main()
{
    int a,b,adis,bdis;

    a=400000;
    b=350000;
    adis= a-(0.13*a);
    bdis= b-(0.21*b);

printf("Harga sepatu A adalah %d\n", a);
printf("Harga sepatu B adalah %d\n", b);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", adis);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", bdis);
}