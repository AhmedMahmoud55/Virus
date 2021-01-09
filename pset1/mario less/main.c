/*
//maroi less by for loop
#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int n=1,height;
   do
   {
      height = get_int ("height=");
   }
   while(height<=0||height>23);

   for(int i=height;i>=1;i--)
   {
      for(int j=1;j<=i;j++)
      {
         printf(" ");
      }
      for(int a=1;a<=n;a++)
      {
         printf("#");

      }
         printf("\n");

       n=n+1;
   }
}
*/

//maroi less by while loop

#include<stdio.h>
#include<cs50.h>
int main(void)
{
   int height;
   do
   {
      height = get_int ("height=");
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
      printf("\n");
      hashes =hashes+1;
      space =space -1;
      i++;
   }

}
