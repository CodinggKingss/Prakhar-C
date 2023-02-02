#include<stdio.h>

 int main()
 {
    int r;
    printf("Enter The radius of cricle: ");
    scanf("%f" ,&r);
    float area = (3.14)*r*r;
    float perimeter = 2*(3.14)*r;
    printf("Area of The Circle is : %f" , area);
    printf("Perimeter of The circle is : %f" , perimeter);
    return 0;
 }