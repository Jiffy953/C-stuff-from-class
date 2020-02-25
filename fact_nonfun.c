#include<stdio.h>
int main()
{
    unsigned int number;
    unsigned int factorial = 1;
    printf("Please enter the number, no larger than 25: ");
    scanf("%d", &number);

    for(int counter = number; counter >= 1; --counter)
    {
        factorial *= counter;
    }
    printf("%u! = %11u\n", number, factorial);
}
