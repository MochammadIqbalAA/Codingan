#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    bool x;
    int temp;
    char y[5];

    printf("Enter Boolean Input True or False: - \n");
    scanf("%s", &y);

    if(strcmp(y, "1") == 0){
        printf("benul");
    }

    else if(strcmp(y, "2") == 0){
        printf("salah");
    }

    x = temp;

    printf("%d", x);

    return 0;
}