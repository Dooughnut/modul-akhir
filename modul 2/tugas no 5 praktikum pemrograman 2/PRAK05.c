#include <stdio.h>
#include <math.h>

int main() {
    float tinggi, sisi_miring, alas, keliling, luas;

    scanf("%f", &tinggi);
    scanf("%f", &sisi_miring);

    alas = sqrt(pow(sisi_miring, 2) - pow(tinggi, 2));

    keliling = tinggi + sisi_miring + alas;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %.2f cm\n", alas);
    printf("Tinggi = %.2f cm\n", tinggi);
    printf("Keliling = %.2f cm\n", keliling);
    printf("Luas = %.2f cm^2\n", luas);

    return 0;
}