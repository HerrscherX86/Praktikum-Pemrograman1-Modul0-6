#include <stdio.h>

int main()
{
    float r,t,v,l,k,phi;
    phi=3.142857;

printf("Masukkan Jari-Jari : ");
scanf("%f", &r);
printf("Masukkan Tinggi    : ");
scanf("%f", &t);

v=phi*(r*r)*t;
l=(phi*(r*r))+(phi*(r*r))+(2*phi*r*t);
k=2*phi*r;

printf("\nVolume   = %.2f\n",v);
printf("Luas     = %.2f\n",l);
printf("Keliling = %.2f\n",k);
}