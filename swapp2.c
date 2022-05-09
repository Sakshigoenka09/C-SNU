//swapping using third variable....
#include <stdio.h>
int main(){
    int a,b,c;
    //before swapping....
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    //after swapping....
    printf("The value of a %d\n",a);
    printf("The value of b %d\n",b);
    return 0;
}