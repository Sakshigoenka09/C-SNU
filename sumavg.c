// To find the sum and average of 3 decimal nos....
#include <stdio.h>
int main()
{
    float a,b,c,sum,avg;
    printf("Enter the three numbers: ");
    scanf("%f,%f,%f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("The sum is %f\n",sum);
    printf("The aerage is %f\n",avg);
    return 0;
}