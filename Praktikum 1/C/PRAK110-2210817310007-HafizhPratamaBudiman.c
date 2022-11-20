#include <stdio.h>
#include <math.h>

int main() {
    float a,t,A,B,C,kel,L;
    a=5;
    t=12;
    A=a;
    B=sqrt(a*a+t*t);
    C=t;
    kel=A+B+C;
    L=A*C/2;

printf("Diketahui :\n");
printf("Alas = %.0f cm\n",a);
printf("Tinggi = %.0f cm\n\n",t);
printf("Jawab :\n");
printf("Sisi A = %.0f cm\n",A);
printf("Sisi B = %.0f cm\n",B);
printf("Sisi C = %.0f cm\n",C);
printf("Keliling = %.0f cm\n",kel);
printf("Luas = %.0f cm\n",L);
}