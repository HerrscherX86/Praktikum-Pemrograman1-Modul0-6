#include <stdio.h> 
#include <stdlib.h>  
  
int main()  
{  
    int p;  
    float n1,n2,hasil;  
    char ch;

    do {   
    printf("\n\n Pilih Program : ");  
    printf("\n 1.Penjumalahan\n 2.Pengurangan\n 3.Perkalian\n 4.Pembagian\n 5.Exit\n");
    printf("Masukkan pilihan : ");      
    scanf("%d", &p);

    switch (p) {
        case 1:
            printf("Masukkan Nilai Pertama : ");
            scanf("%f",&n1);
            printf("Masukkan Nilai Kedua : ");
            scanf("%f",&n2);
            hasil=n1+n2;
            printf("\nHasil Penjumlahan antara %.2f dengan %.2f adalah : %.2f ",n1,n2,hasil);
            break;

        case 2:
            printf("Masukkan Nilai Pertama : ");
            scanf("%f",&n1);
            printf("Masukkan Nilai Kedua : ");
            scanf("%f",&n2);
            hasil=n1-n2;
            printf("\nHasil Pengurangan antara %.2f dengan %.2f adalah : %.2f ",n1,n2,hasil);
            break;

        case 3:
            printf("Masukkan Nilai Pertama : ");
            scanf("%f",&n1);
            printf("Masukkan Nilai Kedua : ");
            scanf("%f",&n2);
            hasil=n1*n2;
            printf("\nHasil Perkalian antara %.2f dengan %.2f adalah : %.2f ",n1,n2,hasil);
            break;

        case 4:
            printf("Masukkan Nilai Pertama : ");
            scanf("%f",&n1);
            printf("Masukkan Nilai Kedua : ");
            scanf("%f",&n2);
            hasil=n1/n2;
            printf("\nHasil Pembagian antara %.2f dengan %.2f adalah : %.2f ",n1,n2,hasil);
            break;

        case 5:
            printf("Terimakasih, telah menggunakan kalkulator Hafizh Pratama Budiman");
            exit(0);
            break;

        default :
            printf("Input anda salah, silahkan coba lagi");
            break;
    }
    } while (p!=5);
}