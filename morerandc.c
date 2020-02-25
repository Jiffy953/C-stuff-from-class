#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int seed;
    printf("%s", "Enter seed: ");
    scanf("%u", &seed);
    srand(seed);
    for (unsigned int i = 1; i <= 10; ++i){
            printf("%d", 1 + (rand() % 6));
            if(i % 5 == 0){
                puts("");
            }
        }
    }
