#include <stdio.h>

int main()
{
    int a,b,x,y,ab,xy,s;
    a=9;
    b=5;
    x=8;
    y=8;
    ab=a%b;
    xy=x%y;
    s=ab+xy;

printf("Variabel A bernilai %d\n", a);
printf("Variabel B bernilai %d\n", b);
printf("Variabel X bernilai %d\n", x);
printf("Variabel Y bernilai %d\n", y);
printf("Total sisa bagi dari A dibagi B dan X dibagi Y adalah %d", s);
}