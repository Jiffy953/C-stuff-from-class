#include<stdio.h>
int main(){
    unsigned int x;
    int s;
    int sum = 0;
    printf("Enter upper limit: ");
    scanf("%d", &s);
    for(x = 1; x <= 20; x=x+1){
        sum += x;
        if(sum >= s){
            break;
        }
        printf("%u  %d\n", x, sum);
    }
    printf("\nBroke out of loop at x == %u\n", x);
}
