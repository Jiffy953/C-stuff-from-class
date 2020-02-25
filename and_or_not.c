#include<stdio.h>
int main(){
    int number;
    printf("Enter an int: ");
    scanf("%d", &number);
    if (number % 2 == 0 && number % 3 == 0)
        printf("%d is divisable by 2 and 3 - ", number);
    if (number % 2 == 0 || number % 3 == 0)
        printf("%d is divisable by 2 or 3 - ", number);
    if ((number % 2 == 0 && number % 3 == 0) && !(number % 2 == 0 && number % 3 == 0))
        printf("%d is divisable by 2 or 3, but not both - ", number);
    return 0;
}
