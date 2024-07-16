//program to print factors of a positive number
#include<stdio.h>
main()
{
    int no,factor,i;

    printf("Enter a number : ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            factor=i;
            printf("Factors of the number %d are %d\n",no,factor);
        }
    }
}
