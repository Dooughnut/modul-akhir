#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 3;
    float hasil;

    hasil = (float)(a * b) / c;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", hasil); 
    return 0;
}