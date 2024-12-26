jari = float(input())
tinggi = float(input())
volume = 22/7 * jari**2 * tinggi
luas = 2 * 22/7 * jari * (jari + tinggi)
keliling = 2 * 22/7 * jari
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")

jari2,tinggi2 = map(float, input().split())
volume2 = 22/7 * jari2**2 * tinggi2
luas2 = 2 * 22/7 * jari2 * (jari2 + tinggi2)
keliling2 = 2 * 22/7 * jari2
print(f"Volume = {volume2:.2f}")
print(f"Luas = {luas2:.2f}")
print(f"Keliling = {keliling2:.2f}")
