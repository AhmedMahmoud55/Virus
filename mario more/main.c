#include<stdio.h>
#include"cs50.h"
int main(void)
{
   int height;
   do
   {
      height=get_int("height");
   }
   while(height<=0||height>23);

   int hashes=1,space=height-1;
   int i=0;
   while (i<height)
   {
      int j=0;
      while(j<space)
      {
         printf(" ");
         j++;
      }
      int k=0;
      while(hashes>k)
      {
         printf("#");
         k++;
      }
      printf("    ");
      space =space -1;
      i++;
      int q=0;
      while (hashes>q)
      {
          printf("#");
          q++;
      }
      hashes =hashes+1;
      printf("\n");

   }

}
