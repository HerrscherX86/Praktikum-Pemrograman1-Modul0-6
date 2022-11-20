#include<stdio.h>
int main()
{
    int s1,s2,s3,kt,hpm,b;
    s1=4;
    s2=5;
    s3=7;
    kt=s1+s2+s3;
    hpm=85000;
    b=kt*hpm;

printf("Diketahui : \n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",s1,s2,s3);
printf("Keliling Tanah Pak Dengklek adalah %d\n",kt);
printf("Harga tanah Per Meter adalah %d\n",hpm);
printf("Jawaban :\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : %d\n",b);
}