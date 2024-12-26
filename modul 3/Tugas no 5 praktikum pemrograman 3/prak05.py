def konversi_detik(detik):

  jam = detik // 3600
  menit = (detik % 3600) // 60
  sisa_detik = detik % 60

  if jam >= 24:
    hari = jam // 24
    jam %= 24
    return f"{hari} hari {jam:02d}:{menit:02d}:{sisa_detik:02d}"
  else:
    return f"{jam:02d}:{menit:02d}:{sisa_detik:02d}"

detik = int(input())

hasil = konversi_detik(detik)
print(hasil)