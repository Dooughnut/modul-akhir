#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    if (N>=1 && N<10)
    {
        printf("satuan");
    }
    else if (N==0)
    {
        printf("nol");
    }
    else if (N>=11 && N<20)
    {
        printf("belasan");
    }
    else if (N>=20 && N<100 || N==10)
    {
        printf("puluhan");
    }
    else
    {
        printf("anda menginput melebihi limit bilangan");
    }
    
return 0;
    

}