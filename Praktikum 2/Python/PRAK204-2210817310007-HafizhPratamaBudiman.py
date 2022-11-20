r=float(input('Masukkan Jari-Jari : '))
t=float(input('Masukkan Tinggi    : '))

phi=3.142857
v=phi*(r*r)*t
l=(phi*(r*r))+(phi*(r*r))+(2*phi*r*t)
k=2*phi*r

print('\nVolume   = ',end='')
print('%.2f'%v)
print('Luas     = ',end='')
print('%.2f'%l)
print('Keliling = ',end='')
print('%.2f'%k)