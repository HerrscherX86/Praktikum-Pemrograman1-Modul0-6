import math

a=5
t=12
A=a
B=math.sqrt(a*a+t*t)
C=t
kel=A+B+C
L=A*C/2

print('Diketahui :')
print('Alas =',a,'cm')
print('tinggi =',t,'cm')
print('\nJawab :')
print('Sisi A =',A,'cm')
print('Sisi B = ',end='')
print('%.0f' % B,'cm')
print('Sisi C =',C,'cm')
print('Keliling = ',end='')
print('%.0f' % kel,'cm')
print('Luas = ',end='')
print('%.0f' % L,'cm')