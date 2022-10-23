//Exercise 2.2
#include <stdio.h>
int main()
{
    int n, range, hasil;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter an range : ");
    scanf("%d", &range);
    for (n, range ; range ; --range)
    {
        hasil =  n * range;
        printf("%d * %d = %d \n", n, range, hasil);
    }
    return 0;
}