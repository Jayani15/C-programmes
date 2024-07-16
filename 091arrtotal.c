//program to read array of N elements and print total and average
#include<stdio.h>
main()
{
    int arr[100],i,no;
    float tot,avg;
    tot=avg=0;

    printf("How many numbers u want to input : ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);

        tot=tot+arr[i];
    }

    avg=tot/no;

    printf("\nThe Total is : %.0f",tot);
    printf("\nThe Average is : %.3f",avg);

}
