// To convert the celcius temperature into farenheit....
#include <stdio.h>
int main()
{
   float a,c,f;
    //here c represents the temperature in celcius...
   // here f represents the temperature in farenheit....
   printf("Enter the value of c: ");
   scanf("%f",&c);
   a=(9*c)/5;
   f=a+32;
   printf("The Temperature in farenheit is %f\n",f);
   return 0;
}