#include<stdio.h>
int main(){
    for(unsigned int x = 1; x <= 10; ++x){
        if(x == 5|| x == 7){
            continue;
        }
        printf("%u ", x);
    }
    puts("\nUsed continue to skip printing 5 and 7");
}
