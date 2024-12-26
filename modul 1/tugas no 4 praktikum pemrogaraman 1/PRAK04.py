sepatuA = 400000
sepatuB = 350000
diskonA = 13
diskonB = 21

afterdiskonA = sepatuA - (sepatuA * diskonA / 100)
afterdiskonB = sepatuB - (sepatuB * diskonB / 100)

print("Harga sepatu A adalah", sepatuA)
print("Harga sepatu B adalah", sepatuB)
print(f"Sepatu A mendapat diskon {diskonA}% sehingga harganya menjadi {afterdiskonA:.0f} ")
print(f"Sepatu B mendapat diskon {diskonB}% sehingga harganya menjadi {afterdiskonB:.0f} ")