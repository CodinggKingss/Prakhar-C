#include<stdio.h>
int main()
{
    int age;

    printf("Enter Age :\n");
    scanf("%d", &age);
    if (age>=18)
    {
        printf ("You are eligible to vote\n");
    }
    else
    {
        printf ("nOT Eligible");
    }
}