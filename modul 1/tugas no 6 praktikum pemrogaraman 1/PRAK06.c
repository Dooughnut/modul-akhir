#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 3;
    int hasil;

    hasil = a==b?1:0;
    printf("Apakah a sama dengan b? jawabannya adalah %d\n", hasil);

    hasil = b > c?1:0;
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", hasil);

    hasil = a != c?1:0;
    printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n", hasil);

    return 0;
}