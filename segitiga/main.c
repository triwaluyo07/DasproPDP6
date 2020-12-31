#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas : 4103

int main()
{
    int sisi1;
    int sisi2;
    int sisi3;
    float s; /// untuk mencari luas segitiga sembarang
    float kell;
    float set_alas; ///setengah alas
    float tinggi;
    float luas;

    printf("=====================\n");
    printf("\tSEGITIGA\n");
    printf("=====================\n");
    printf("Masukan sisi\n");
    printf("Masukan sisi 1\t\t : ");
    scanf("%d",&sisi1);
    printf("Masukan sisi 2\t\t : ");
    scanf("%d",&sisi2);
    printf("Masukan sisi 3(alas)\t : ");
    scanf("%d",&sisi3);
    puts(" ");

    if((sisi1==sisi2)&&(sisi2==sisi3)&&(sisi3==sisi1))
    {
     printf("Berdasarkan sisi yang dimiliki,termasuk segitiga sama sisi\n");
     puts(" ");
     set_alas = 0.5*sisi3;
     tinggi = sqrt((sisi1*sisi1)-(set_alas*set_alas));
     luas = 0.5*sisi3*tinggi;
     printf("Luas Segitiga nya adalah %.2f\n",luas);
     kell = sisi1+sisi2+sisi3;
     printf("Keliling segitiga nya adalah %.2f\n", kell);
    }
    else if((sisi1==sisi2)||(sisi1==!sisi3)&&(sisi2==!sisi3))
        {
        printf("Berdasarkan sisi yang dimiliki,termasuk segitiga sama kaki\n");
        puts(" ");
        set_alas = 0.5*sisi3;
        tinggi = sqrt((sisi1*sisi1)-(set_alas*set_alas));
        luas = 0.5*sisi3*tinggi;
        printf("Luas Segitiga nya adalah %.2f\n",luas);
        kell = sisi1+sisi2+sisi3;
        printf("Keliling segitiga nya adalah %.2f\n", kell);
        }
        else if((sisi1==!sisi2==!sisi3))
            {
            printf("Berdasarkan sisi yang dimiliki,termasuk segitiga sembarang\n");
            puts(" ");
            s=0.5*(sisi1+sisi2+sisi3);
            luas=sqrt(s*(s-sisi1)*(s-sisi2)*(s-sisi3));
            printf("Luas Segitiga nya adalah %.2f\n",luas);
            kell = sisi1+sisi2+sisi3;
            printf("Keliling segitiga nya adalah %.2f\n", kell);

            }

    return 0;
}
