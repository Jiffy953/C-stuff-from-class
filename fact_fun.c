#include<stdio.h>
int factorial(int number);
int main()
{
    unsigned int number;
    printf("Please enter the number, no larger than 25: ");
    scanf("%u", &number);
    printf("%u! = %11u\n", number, factorial(number));
}

int factorial(int number){
    int factorial = 1;
    for(int counter = number; counter >= 1; --counter)
        factorial *= counter;
    return factorial;
}
