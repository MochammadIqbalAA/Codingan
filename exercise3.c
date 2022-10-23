//exercise 3
#include <stdio.h>
int main()
{
    float x, sum = 0;
    do
    {
        printf("enter a number = ");
        scanf("%f", &x);
        sum = sum + x;
    } while (x != 0);

    printf("Sum = %.2f", sum);
    
    return 0;
}