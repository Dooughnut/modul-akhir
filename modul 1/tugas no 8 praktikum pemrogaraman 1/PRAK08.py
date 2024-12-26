
putaran = 5
jarak_tempuh = 14  
phi = 3.14
jarak_tempuh_meter = jarak_tempuh * 1000

keliling_taman = jarak_tempuh_meter / putaran

jari_jari_taman_meter = keliling_taman / (2 * phi)
jari_jari_taman_km = jari_jari_taman_meter / 1000

print("Diketahui:")
print("Pak Dengklek mengelilingi taman =", putaran, "Putaran")
print("Jarak tempuh Pak Dengklek =", jarak_tempuh, "Kilometer")
print("Jawaban:")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jari_jari_taman_km:.2f} Kilometer")