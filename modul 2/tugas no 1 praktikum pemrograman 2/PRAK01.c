#include <stdio.h>
#include <string.h>

int main() {
  char nama[50], nim[20], kelasp[10], ttl[50], alamat[100], hobi[50], nohp[15];

  printf("Nama: ");
  fgets(nama, sizeof(nama), stdin);
  nama[strcspn(nama, "\n")] = 0; 

  printf("NIM: ");
  fgets(nim, sizeof(nim), stdin);
  nim[strcspn(nim, "\n")] = 0;

  printffget("kelas paralel: ");
  s(kelasp, sizeof(kelasp), stdin);
  kelasp[strcspn(kelasp, "\n")] = 0;

  printf("tempat/tanggal lahir: ");
  fgets(ttl, sizeof(ttl), stdin);
  ttl[strcspn(ttl, "\n")] = 0;

  printf("alamat: ");
  fgets(alamat, sizeof(alamat), stdin);
  alamat[strcspn(alamat, "\n")] = 0;

  printf("hobby: ");
  fgets(hobi, sizeof(hobi), stdin);
  hobi[strcspn(hobi, "\n")] = 0;

  printf("No. hp: ");
  fgets(nohp, sizeof(nohp), stdin);
  nohp[strcspn(nohp, "\n")] = 0;


  printf("Nama                : %s\n", nama);
  printf("NIM                 : %s\n", nim);
  printf("kelas paralel       : %s\n", kelasp);
  printf("tempat/tanggal lahir: %s\n", ttl);
  printf("alamat              : %s\n", alamat);
  printf("hobby               : %s\n", hobi);
  printf("No.hp               : %s\n", nohp);

  return 0;
}