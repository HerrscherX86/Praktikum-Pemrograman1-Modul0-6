#include <stdio.h>
#include <math.h>

int main(){

    int A,B,C,a,t,k,l;

printf("Masukkan A : ");
scanf("%d", &A);
printf("Masukkan B : ");
scanf("%d", &B);
    C=sqrt(B*B-A*A);
    t=A;
    k=A+B+C;
    l=0.5*C*A;
printf("\nAlas     = %d cm",C);
printf("\nTinggi   = %d cm",t);
printf("\nKeliling = %d cm",k);
printf("\nLuas     = %d cm^2",l);


}