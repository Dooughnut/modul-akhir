#include<stdio.h>
int main(){
    float bil1, bil2, hasil;

    printf("masukan bilangan pertama: ");
    scanf(" %f",&bil1);
    printf("masukan bilangan kedua: ");
    scanf(" %f",&bil2);

    hasil = bil1 + bil2;

    printf(" hasil dari penjumlahan bilangan pertama %.0f dan bilangan kedua %.1f adalah: %.2f", bil1, bil2, hasil);

    return 0;


}