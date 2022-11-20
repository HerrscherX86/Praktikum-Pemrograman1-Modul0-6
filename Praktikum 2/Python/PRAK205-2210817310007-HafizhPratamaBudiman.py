import math

A=int(input('Nilai A : '))
B=int(input('Nilai B : '))

C=round(math.sqrt(B*B-A*A))
t=A
k=A+B+C
l=round(0.5*C*A)

print('\nAlas     = ',C,'cm')
print('Tinggi   = ',t,'cm')
print('Keliling = ',k,'cm')
print('Luas     = ',l,'cm^2')