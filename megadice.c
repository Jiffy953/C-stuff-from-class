#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned int f1 = 0,f2 = 0,f3 = 0,f4 = 0,f5 = 0,f6 = 0;
    for(unsigned int roll = 1; roll <= 6000; ++roll)
    {
        int face = 1 +rand() % 6;

        switch(face){

            case 1:
                ++f1;
                break;
            case 2:
                ++f2;
                break;
            case 3:
                ++f3;
                break;
            case 4:
                ++f4;
                break;
            case 5:
                ++f5;
                break;
            case 6:
                ++f6;
                break;
        }
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d", f1, f2, f3, f4, f5, f6);
}
