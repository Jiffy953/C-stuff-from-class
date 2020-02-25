#include<stdio.h>
int main()
{
    unsigned int sum = 0;
    for(unsigned int number = 2; number <= 100; number += 2)
    {
        printf("Running total is: %d\n", sum);
        sum += number;
    }
    printf("Sum is: %d\n", sum);
}
