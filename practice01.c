#include<stdio.h>
int main()
{
   int phy,maths,bio,chem,total;
   float average,
    printf(" Enter Marks in Physics : ");
    scanf("%d", &phy);
    printf("Enter Marks in Chemistry :");
    scanf("%d", &chem);
    printf("Enter Marks in Biology :");
    scanf("%d", &bio);
    printf("Enter Marks in Mathematics :");
    scanf("%d", &maths);
    total = phy+chem+maths+bio;
    average = (total/400)*100;
    printf("\n ");
    printf("  Your Marks in physics is : %d", phy);printf("\n");
    printf(" Your Marks in Chemistry is : %d", chem);printf("\n");
    printf(" Your Marks in Biology is : %d", bio);printf("\n");
    printf(" Your Marks in Mathematics is : %d", maths);printf("\n");
    printf(" Your Total Marks are : %d" , total);printf("\n");
    printf(" Your Total Percenateg is : %d", average);printf("\n");
    if (total>(0.40*400)&&phy>33&&maths>33&&bio>33&&chem>33)
    {
     printf("Congrats You are Passed in The Examination !");   /* code */
    }
    else
    {
        printf("Better Luck Next Time ! :)");
    }
    return 0;
}

