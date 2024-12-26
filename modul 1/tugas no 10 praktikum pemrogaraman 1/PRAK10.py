import math

alas = 5
tinggi = 12

sisi_miring = math.sqrt(alas**2 + tinggi**2)

keliling = alas + tinggi + sisi_miring

luas = 0.5 * alas * tinggi

print("Diketahui:")
print("Alas = ", alas, "cm")
print("Tinggi = ", tinggi, "cm")
print("Jawab:")
print("Sisi A = ", tinggi, "cm (tinggi)")
print(f"Sisi B = {sisi_miring:.0f} cm (sisi miring)")
print("Sisi C = ", alas, "cm (alas)")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")