#include <stdio.h>

int satuan;
int convertcelsius;
float celsius, ctor, ctof, ctok;
int convertreamur;
float reamur, rtoc, rtof, rtok;
int convertfahrenheit;
float fahren, ftoc, ftor, ftok;
int convertkelvin;
float kelvin, ktoc, ktof, ktor;
 
void fromcelsius(){
    printf("Mau anda convert manjadi satuan apa?\n 1. Reamur\n 2. Fahrenheit\n 3. Kelvin\n");
    scanf("%d", &convertcelsius);
    if (convertcelsius == 1)
    {
        printf("Masukkan suhu dalam bentuk celsius :\n");
        scanf("%f", &celsius);
        ctor = (celsius * 4/5);
        printf("%.2f C sama dengan %.2f R", celsius, ctor);
    } else if (convertcelsius == 2){
        printf("Masukkan suhu dalam bentuk celsius :\n");
        scanf("%f", &celsius);
        ctof = (celsius * 9/5 )+ 32;
        printf("%.2f C sama dengan %.2f F", celsius, ctof);
    } else if (convertcelsius == 3){
        printf("Masukkan suhu dalam bentuk celsius :\n");
        scanf("%f", &celsius);
        ctok = celsius + 273; 
        printf("%.2f C sama dengan %.2f K", celsius, ctok);
    }

    
}


void fromreamur(){
    printf("Mau anda convert manjadi satuan apa?\n 1. Celsius\n 2. Fahrenheit\n 3. Kelvin\n");
    scanf("%d", &convertreamur);
    if (convertreamur == 1)
    {
        printf("Masukkan suhu dalam bentuk reamur :\n");
        scanf("%f", &reamur);
        rtoc = (reamur * 5/4);
        printf("%.2f R sama dengan %.2f C", reamur, rtoc);
    } else if (convertreamur == 2){
        printf("Masukkan suhu dalam bentuk reamur :\n");
        scanf("%f", &reamur);
        rtof = (reamur * 9/4 ) + 32;
        printf("%.2f R sama dengan %.2f F", reamur, rtof);
    } else if (convertreamur == 3){
        printf("Masukkan suhu dalam bentuk reamur :\n");
        scanf("%f", &reamur);
        rtok = (reamur * 5/4) + 273; 
        printf("%.2f R sama dengan %.2f K", reamur, rtok);
    }
    
    
}


void fromfahrenheit(){
    printf("Mau anda convert manjadi satuan apa?\n 1. Celsius\n 2. Reamur\n 3. Kelvin\n");
    scanf("%d", &convertfahrenheit);
    if (convertfahrenheit == 1)
    {
        printf("Masukkan suhu dalam bentuk Fahrenheit :\n");
        scanf("%f", &fahren);
        ftoc = (fahren - 32 ) * 5/9;
        printf("%.2f F sama dengan %.2f C", fahren, ftoc);
    } else if (convertfahrenheit == 2){
        printf("Masukkan suhu dalam bentuk Fahrenheit :\n");
        scanf("%f", &fahren);
        ftor = (fahren - 32 ) * 4/9;
        printf("%.2f F sama dengan %.2f R", fahren, ftor);
    } else if (convertfahrenheit == 3){
        printf("Masukkan suhu dalam bentuk Fahrenheit :\n");
        scanf("%f", &fahren);
        ftok = ((fahren - 32) * 5/9) + 273; 
        printf("%.2f F sama dengan %.2f K", fahren, ftok);
    }
    

}


void fromkelvin(){
    printf("Mau anda convert manjadi satuan apa?\n 1. Celsius\n 2. Fahrenheit\n 3. Reamur\n");
    scanf("%d", &convertkelvin);
    if (convertkelvin == 1)
    {
        printf("Masukkan suhu dalam bentuk Kelvin :\n");
        scanf("%f", &kelvin);
        ktoc = kelvin - 273;
        printf("%.2f K sama dengan %.2f C", kelvin, ktoc);
    } else if (convertkelvin == 2){
        printf("Masukkan suhu dalam bentuk Kelvin :\n");
        scanf("%f", &kelvin);
        ktof = (kelvin - 273) * 4/5;
        printf("%.2f K sama dengan %.2f F", kelvin, ktof);
    } else if (convertkelvin == 3){
        printf("Masukkan suhu dalam bentuk Kelvin :\n");
        scanf("%f", &kelvin);
        ktor =((kelvin - 273) * 9/5) + 32; 
        printf("%.2f K sama dengan %.2f R", kelvin, ktor);
    }
    

}
int main (){

    printf("\nManakah satuan suhu yang akan anda convert : \n");
    printf(" 1. Celsius\n 2. Reamur\n 3. Fahrenheit\n 4. Kelvin\n");
    scanf("%d", &satuan);
    if (satuan == 1)
    {
        fromcelsius();
    } else if (satuan == 2)
    {
        fromreamur();
    } else if (satuan == 3)
    {
        fromfahrenheit();
    } else if (satuan == 4)
    {
         fromkelvin();
    }
    
    
}