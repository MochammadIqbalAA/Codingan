#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (){
    char a[20], b[20];
    pindah:
    printf("masukkan A : ");
    gets(a);
    printf("masukkan B : ");
    gets(b);

    if (strcmp(a, b) != 0)
    {
        printf("Angka sama\n");
        goto pindah;
    } else {
        printf("Angka berbeda ");
    }
    
    return 0;
}