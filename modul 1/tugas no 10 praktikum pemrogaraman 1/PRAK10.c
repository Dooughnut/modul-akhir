#include <stdio.h>
#include <math.h>

int main() {

    float alas = 5, tinggi = 12, sisi_miring, keliling, luas;

    sisi_miring = sqrt(alas*alas + tinggi*tinggi);
    keliling = alas + tinggi + sisi_miring;
    luas = 0.5 * alas * tinggi;

    printf("Diketahui:\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Jawab:\n");
    printf("Sisi A = %.0f cm (tinggi)\n", tinggi);
    printf("Sisi B = %.0f cm (sisi miring)\n", sisi_miring);
    printf("Sisi C = %.0f cm (alas)\n", alas);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}