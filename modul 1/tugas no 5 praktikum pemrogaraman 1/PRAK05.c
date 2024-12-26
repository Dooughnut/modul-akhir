#include <stdio.h>

int main() {
    int a = 9, b = 5, x = 8, y = 8;
    int sisa_bagi_ab, sisa_bagi_xy, total_sisa_bagi;

    sisa_bagi_ab = a % b;
    sisa_bagi_xy = x % y;

    total_sisa_bagi = sisa_bagi_ab + sisa_bagi_xy;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa_bagi);

    return 0;
}