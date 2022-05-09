// To find the area and perimeter of a Rectangle....
#include <stdio.h>
int main(){
    float a,b,area,per;
    printf("Enter the length: ");
    scanf("%f",&a);
    printf("Enter the breadth: ");
    scanf("%f",&b);
    area=a*b;
    per=2*(a+b);
    printf("The perimeter is %f\n",per);
    printf("The area is %f\n",area);
}
