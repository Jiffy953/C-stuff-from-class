// Fig. 4.2: fig04_02.c
// Counter-controlled iteration with the for statement
#include <stdio.h>

int main(void)
{
   // initialization, iteration condition, and increment
   //  are all included in the for statement header.
   unsigned int counter = 1;
   for (; counter <= 10; counter++)
   {
      printf("%u\n", counter);
   }
}


