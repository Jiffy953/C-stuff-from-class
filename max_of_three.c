#include<stdio.h>
int maximum(int a, int b, int c, int d);
int main()
{
    int n1, n2, n3, n4;
    printf("%s", "Enter four ints: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    printf("Max is: %d\n", maximum(n1, n2, n3, n4));
    return 0;
}
int maximum(int a, int b, int c, int d)
{
    int max = a;
    if(b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    if (d > max){
        max = d;
    }
    return max;
}
