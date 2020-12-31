#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main()
{
  long long Card_Number,cc_Check;
  int evenNum=0,oddNum=0,currnet=0,temp=0,digit=0,Total_sum;
  bool is_even = false;
  string Card_Type;

  do
  {
      Card_Number=get_long_long("Enter Credit Card Number: \n");

  }
  while(Card_Number<0);

  cc_Check=Card_Number;


      while(Card_Number!=0)
      {
          currnet=(Card_Number%10);
          digit++;


      if(is_even==true)
      {
        temp=currnet*2;


          while(temp!=0)
          {
              evenNum+=temp%10;
              temp/=10;
          }
          is_even=false;
      }
      else
      {
          oddNum+=currnet;
          is_even=true;
      }
          Card_Number/=10;
      }
      Total_sum=oddNum+evenNum;
      if(Total_sum%10==0)
      {
          //amex
          if(digit==15)
          {
              if(cc_Check>=340000000000000||cc_Check>=370000000000000)
              {
                  Card_Type="AMEX";
              }
              else
              {
                  Card_Type="INVALID";
              }
          }
          //visa
          if(digit==13)
          {
              if(cc_Check>=4000000000000)
              {
                  Card_Type="VISA";
              }
              else
              {
                  Card_Type="INVALID";
              }
          }
          //Mastercard
          if(digit==16)
          {
              if(cc_Check>=5100000000000000||cc_Check>=5200000000000000||cc_Check>=5300000000000000||cc_Check>=5400000000000000||cc_Check>=5500000000000000)
              {
                  Card_Type="MASTERCARD";
              }
              else if (cc_Check>=4000000000000000)
              {
                  Card_Type="VISA";
              }
              else
              {
                  Card_Type="INVALID";

              }

          }


      }
      else
          {
              Card_Type="INVALID";
          }
      printf("%s",Card_Type);

}

