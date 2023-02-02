// Write a program to accept an integer.Print the largest and smallest digit present in the number.
// example (1): if n=4623,the the output should be : Largest digit=6,Smallest digit =2
// example(2) : if n= 2045,then the output should be : Largest digit =5 , smallest digit =0
#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Number :");
    scanf("%d",&n);
    int large=0;
    int small=0;
    int temp=n;
    while (temp>0)
    {
        int digit=temp%10;
                if(digit>large)
                {
                    large=digit;
                }
                else if(digit<small)
                {
                    small=digit;
                }
                
        temp=temp/10;
    }
    printf("The Number is : %d\n", n);
    printf("The Lrgest Digit is = %d\n", large);
    printf("The Smaleest Digit is = %d\n", small);
    return 0;   
        
        
    
    
}