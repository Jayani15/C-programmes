//program to print result for inputted base and power
#include<stdio.h>
main()
{
    int b,p,count;
    b=p=0;
    count=1;

    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number to which %d have to be raised : ",b);
    scanf("%d",&p);

    for(count=1;count<p;count++)
    {
        b=b*b;
    }
    printf("%d",b);

}
