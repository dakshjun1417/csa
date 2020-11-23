#include <cs50.h>
#include <stdio.h>
#include<math.h>
int main (void)
{
   float z;
   do
   {
      z = get_float("balance owed?\n");
   }
   while (z < 0);
   int a = round(z*100);
   int b = a%25;
   int d = (a-b)/25; //one
   int e = b%10;
   int g = (b-e)/10; //two
   int h;
   if( e >= 5)
   {
      h = e-4;
   }
   else
   {
      h = e;
   }
   int i = d+g+h;
   printf("%i \n", i);



}