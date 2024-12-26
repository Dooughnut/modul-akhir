import math

A,B = map(float, input().split())
C = math.sqrt(B**2 - A**2)
keliling = A + B + C
luas = 0.5 * C * A
print(f"Alas = {C:.0f}")
print(f"Tinggi = {A:.0f}")
print(f"Luas = {luas:.0f}")
print(f"Keliling = {keliling:.0f}")

A1 = float(input())
B1 = float(input())
C1 = math.sqrt(B1**2 - A1**2)
keliling1 = A1 + B1 + C1
luas1 = 0.5 * C1 * A1
print(f"Alas = {C1:.0f}")
print(f"Tinggi = {A1:.0f}")
print(f"Luas = {luas1:.0f}")
print(f"Keliling = {keliling1:.0f}")

