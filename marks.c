#include<stdio.h>
int main()
{
    int maths,chem,comp,phy,bio;
    printf("Enter Marks In Maths :");
    scanf("%d", &maths);
    printf("ENter Marks In Chemistry :");
    scanf("%d", &chem);
    printf("ENter Marks In Biology :");
    scanf("%d", bio);
    printf("Enter Marks iN Computer :");
    scanf("%d",&comp);
    printf("Enter Marks In Physics :");
    scanf("%d", &phy);
    int total=maths+phy+chem+comp+bio;
    float Avg = (total/500)*100;
    printf("\n");
    printf("Total Marks are : %d", total);
    printf("\n");
    printf("Percentage is : %f", Avg);
}