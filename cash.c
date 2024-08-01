#include<cs50.h>
#include<stdio.h>

int get_cents(void);
int calculate_quaters(int cents);
int calculate_tens(int cents);
int calculate_five(int cents);
int calculate_ones(int cents);

int main(void)
{
   //Ask the costmer how amy cents is owed
      int cents = get_cents( );

  //The number of quater is calculated which is given by the costmer
      int quaters = calculate_quaters(cents);
      cents = cents-quaters*25;

    //The number of tens is calculated which is given by the costmer
       int tens = calculate_tens(cents);
         cents = cents-tens*10;

     //The number of tens is calculated which is given by the costmer
       int five= calculate_five(cents);
         cents = cents-five*5;

     //The number of o is calculated which is given by the costmer
       int ones = calculate_ones(cents);
         cents = cents-ones*1;

    //total coins
    int coins=quaters+tens+five+ones;
   printf("%i/n", coins);
 }
int get_cents(void)

{
  int cents;

  do
   {
     cents=get_int("cents owed:");
   }
  while(cents<0);
  return cents;
}


int calculate_quaters(int cents)
{
  int quaters=0;
  while(cents>=25)
  {
    cents=cents-25;
    quaters++;
  }
  return quaters;
}

int calculate_tens(int cents)
{
  int tens=0;
  while(cents>=10)
  {
    cents=cents-10;
    tens++;
  }
  return tens;
}

int calculate_five(int cents)
{
  int five=0;
  while(cents>=5)
  {
    cents=cents-5;
    five++;
  }
  return five;
}

int calculate_ones(int cents)
{
  int ones=0;
  while(cents>=1)
  {
    cents=cents-1;
    ones++;
  }
  return ones;
}

