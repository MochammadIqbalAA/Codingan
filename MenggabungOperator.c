#include <stdio.h>
#include <string.h>
int main (int argc,char** argv){
    char namaPanggilan[20];
    char asalkota[20];

    printf("Masukkan nama panggilan : ");
    gets(namaPanggilan);
    printf("Masukkan Asal kota anda : ");
    gets(asalkota);

    printf("Halo %s\n", namaPanggilan);
    printf("Anda berasal dari kota/kabupaten %s\n", asalkota);
    return 0;
}