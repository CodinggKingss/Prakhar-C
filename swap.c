#include<stdio.h>
int main()
{
    int a=15;
    int b=10;
   printf("Orginial Value of a is : %d\n", a);
printf("Original Value of b is : %d\n", b);
    a=a+b;
    b=a-b;
    a=a-b;  
printf("New Value of a is : %d\n", a);
printf("New Value of b is : %d\n", b);
    return 0;
}