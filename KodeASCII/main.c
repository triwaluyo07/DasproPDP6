#include <stdio.h>
#include <stdlib.h>

///Nama : Tri Waluyo
///Nim  : A11.2017.10097
///Kelas : 4103

int main()
{
    int ascii;
    printf("=======================\n");
    printf("\tKode ASCII\n");
    printf("=======================\n");

    printf("Masukkan Kode ASCII\t : ");
    scanf("%d",&ascii);
    printf("Keterangan\t\t : ");

    if((ascii>=1)&&(ascii<=32)||(ascii==127))
    {
    printf("Kode ASCII termasuk control caracter\n");
    }
    else if(((ascii>=33)&&(ascii<=47))||((ascii>=58)&&(ascii<=64))||((ascii>=91)&&(ascii<=96))||((ascii>=123)&&(ascii<=126)))
         {
         printf("Kode ASCII termasuk simbol\n");
         }
         else if((ascii>=48)&&(ascii<=57)&&(ascii%2==0))
              {
              printf("Kode ASCII termasuk angka genap");
              }
              else if((ascii>=48)&&(ascii<=57)&&(ascii%2==!0))
                    {
                    printf("Kode ASCII termasuk angka ganjil");
                    }
                    else if((ascii==65)||(ascii==69)||(ascii==73)||(ascii==79)||(ascii==85)||(ascii==97)||(ascii==101)||(ascii==105)||(ascii==111)||(ascii==117))
                         {
                         printf("Kode ASCII termasuk huruf vokal");
                         }
                         else if((ascii>65)&&(ascii<=90)||(ascii>=97)&&(ascii<=122))
                              {
                              printf("Kode ASCII termasuk huruf konsonan");
                              }
                              else if(ascii<0)
                                    {
                                    printf("kode ASCII tidak valid,masukkan kode lebih dari 0");
                                    }
                                    else
                                        {
                                        printf("kode ASCII tidak valid,masukkan kode kurang dari 128");
                                        }
    return 0;
}
