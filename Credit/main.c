#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main()
{
  long long cc;
  int count=0;
   do
    {
        cc= get_long_long("Eneter Credit Card Number ");
    }
   while(cc<0);

   while (cc>0)
   {
       cc=cc/10;
       count++;
   }
   if (count!=13 &&count!=15 &&count!=16)
   {
       printf("Card Invalid");
   }
   else
   {
       printf("Card Is Valid");
   }
}
