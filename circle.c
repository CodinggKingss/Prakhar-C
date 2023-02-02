#include<stdio.h>
int main()
{
    int r;
    float pi=3.14;
    printf("Enter The Radius Of The Circle :-");
    scanf("%d", &r);
    float area = pi*r*r;
    float peri=2*pi*r;
    printf("Area Of The Circle is : %f ", area);
    printf(" \n Perimeter Of The Circle is : %f ", peri);
    return 0;
}