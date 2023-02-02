#include<stdio.h>

int main()
{
    int sal;
    int f=0.18;
    float tax;
    
    printf("Enter Salary :");
    scanf("%d", &sal);
    if(sal<=100000){
       tax=0;
    }
    if(sal>100000)
    {
        tax=f*sal;
    }
    printf("Total Tax to be paid : %d", tax);
    return 0;
}