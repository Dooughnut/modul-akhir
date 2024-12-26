#include <stdio.h>

int main() {
    int detik, jam, menit, sisaDetik;
    
    scanf("%d", &detik);

    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    sisaDetik = detik % 60;

    if (jam >= 24) {
        int hari = jam / 24;
        jam %= 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, sisaDetik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, sisaDetik);
    }

    return 0;
}