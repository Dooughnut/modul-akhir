#include <stdio.h>

int main() {
    int sepatuA = 400000, sepatuB = 350000;
    int diskonA = 13, diskonB = 21;
    int AfterdiskonA, AfterdiskonB;

    AfterdiskonA = sepatuA - (sepatuA * diskonA / 100);
    AfterdiskonB = sepatuB - (sepatuB * diskonB / 100);

    printf("Harga sepatu A adalah %d\n", sepatuA);
    printf("Harga sepatu B adalah %d\n", sepatuB);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskonA, AfterdiskonA);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", diskonB, AfterdiskonB);

    return 0;
}