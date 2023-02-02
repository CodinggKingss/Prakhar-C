#include<stdio.h>
int main()
{
    int age;
    printf("Enter Age");
    scanf("%d", &age);
    if(age>18)
    {
        printf("You Are eligible for vote");
    }
    else
    {
        printf("You are not eligible");
    }
    return 0 ;
    }
