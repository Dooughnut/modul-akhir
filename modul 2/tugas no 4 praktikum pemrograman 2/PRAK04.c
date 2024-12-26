#include <stdio.h>
#include <math.h>

int main() {
    float jarijari, tinggi, volume, luasp, keliling;
    
    scanf("%f", &jarijari); scanf("%f", &tinggi);

    volume = 22 * (jarijari * jarijari) * tinggi / 7;
    luasp = 2 * 22 * jarijari * (jarijari + tinggi) / 7;
    keliling = 2 * 22 * jarijari / 7;

    printf("Volume = %.2f \n", volume);
    printf("Luas = %.2f \n", luasp);
    printf("Keliling = %.2f \n", keliling);

    return 0;
}