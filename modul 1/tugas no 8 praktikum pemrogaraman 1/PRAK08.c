#include <stdio.h>
#define phi 3.14f

int main() {
    int putaran = 5;
    float jarak_tempuh = 14, keliling_taman, jari_jari_taman_meter, jari_jari_taman_km;

    keliling_taman = jarak_tempuh * 1000 / putaran;

    jari_jari_taman_meter = keliling_taman / (2 *phi);
    jari_jari_taman_km = jari_jari_taman_meter / 1000;

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak_tempuh);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari_taman_km);


    return 0;
}