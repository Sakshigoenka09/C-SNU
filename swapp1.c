//Swapping without third variable...
#include <stdio.h>
int main()
{
    int a,b;
    //before swapping.....
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    //after swapping......
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
}