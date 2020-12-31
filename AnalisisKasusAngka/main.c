#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas : 4103

int main()
{
    int angka;

    printf("===========================\n");
    printf("\tSoal PDP6 No1\n");
    printf("===========================\n");

    printf("Masukkan angka : ");
    scanf("%d",&angka);

    if(angka<0)
    {
    printf("Angka tidak valid, masukkan angka lebih dari 0\n");
    }
    else if((angka>0)&&(angka<10))
        {
        printf("Angka yang anda masukkan merupakan satuan\n");
        }
        else if((angka>=10)&&(angka<20))
            {
            printf("Angka yang anda masukkan merupakan belasan\n");
            }
            else if((angka>=20)&&(angka<100))
                {
                printf("Angka yang anda masukkan merupakan puluhan\n");
                }
                else if((angka>=100)&&(angka<1000))
                    {
                    printf("Angka yang anda masukkan merupakan ratusan\n");
                    }
                    else if((angka>=1000)&&(angka<10000))
                        {
                        printf("Angka yang anda masukkan merupakan ribuan\n");
                        }
                        else
                            {
                            printf("Angka yang anda masukkan lebih dari ribuan\n");
                            }
    return 0;
}
