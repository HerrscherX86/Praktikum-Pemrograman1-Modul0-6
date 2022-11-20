#include<stdio.h>
int main()
{
    float mt,jt,k,phi,r;
    mt=5;
    jt=14;
    k=jt/mt;
    phi=3.14;
    r=k/(2*phi);

printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",mt);
printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",jt);
printf("\n");
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi oleh Pak Dengklek adalah %.2f Kilometer\n",r);
}