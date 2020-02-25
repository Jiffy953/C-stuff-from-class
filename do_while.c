#include<stdio.h>
int main(){
    unsigned int counter = 11;
    do{
        printf("%u  ", counter);
        ++counter;
    }
    while(counter <= 100);
    }
