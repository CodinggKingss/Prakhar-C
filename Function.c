// Multipliaction Table of Any Number Using Function 
#include<stdio.h>
int num;
void table()
{    
    printf("Enter The Number Of Which You Have To Print The Table :\n");
    scanf("%d", &num);
    for (int i = 1; i<=10; i++)
    {
        printf("%d X %d = %d\n", num,i,num*i);
    }
}
void  bubblesorting()
{
    int n;
    printf("Enter Size Of Array :\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter Array Elements :\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unsorted Array is :\n");
    for (int i = 0; i <n; i++)
    {
       printf("%d ", a[i]);
    }
    int t;
    for (int i = 0; i <n-1; i++)
    {
       for (int j = i+1; j<n; j++)
       {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
       }
    }
    printf("\n");
    printf("Sorted Array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }  
    int max=a[n-1];
    int min=a[0];
    int diff=max-min;
    printf("\n Biggest Number In the Given Array is :%d\n", max);
    printf("Smallest Number In The Given Array is :%d\n", min);
    printf("Difference Between Them is :%d\n", diff);
}
int factorial(int n1)
{
    if(n1==1||n1==0)
    {
       return 1;
    }
    else
    {
     return(n1*factorial(n1-1));
    }
}
int fib_recursive(int n2)
{
    if(n2==1||n2==2)
    {
        return n2-1;
    }
    else
    {
        return (fib_recursive(n2-1) + fib_recursive(n2-2));
    }
}
int fib_iterative(int n2)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n2-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1

    }
    
    return a;
}
int main()
{
    // table();
    // bubblesorting();
    // int n1;
    // printf("Enter The number of which factorail you have to find:\n");
    // scanf("%d", &n1);
    // printf("Factorial of %d is %d ",n1,factorial(n1));
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
    
}
