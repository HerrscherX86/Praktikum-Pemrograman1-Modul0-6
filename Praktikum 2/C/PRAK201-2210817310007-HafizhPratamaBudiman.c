#include <stdio.h>
int main()
{
    char nama[50],nim[20],kelas[20],ttl[50],alm[100],hoby[20],hp[20];

printf("Nama                        : ");
scanf("%[^\n]%*c", nama);
printf("NIM                         : ");
scanf("%[^\n]%*c", nim);
printf("Kelas Paralel               : ");
scanf("%[^\n]%*c", kelas);
printf("Tempat/Tanggal Lahir        : ");
scanf("%[^\n]%*c", ttl);
printf("Alamat                      : ");
scanf("%[^\n]%*c", alm);
printf("Hobby                       : ");
scanf("%[^\n]%*c", hoby);
printf("No. HP                      : ");
scanf("%[^\n]%*c", hp);

printf("\nNama                        : %s\n", nama);
printf("NIM                         : %s\n", nim);
printf("Kelas Paralel               : %s\n", kelas);
printf("Tempat/Tanggal Lahir        : %s\n", ttl);
printf("Alamat                      : %s\n", alm);
printf("Hobby                       : %s\n", hoby);
printf("No. HP                      : %s\n", hp);
}