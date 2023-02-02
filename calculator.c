#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Your Choice from (+,-,*,/) \n");
    scanf("%c", &ch);
    int a,b,c;
        printf("Enter The Value of a :");
        scanf("%d", &a);
        printf("Enter The value of b : ");
        scanf("%d", &b);
    switch (ch)
    {
    case '+':
        /* code */
        
        c = a+b;
        printf("The sum is %d", c);
        break;
        case '-':
        
        if(a>b)
        {
        c = a-b;
        }
        else
        c=b-a;
        printf("subtraction is %d", c);
        break;
        case'*':
        c=a*b;
        printf("Product is %d", c);
        case '/':
        c=a/b;
        printf("Division is %d", c);
    default:
        break;
    }
}