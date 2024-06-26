//program to print sum of first and last digits of an inputted number
#include<stdio.h>
main()
{
    int fd,ld,sum,no,count,d,temp;
    fd=ld=sum=no=temp=0;
    count=d=1;

    printf("Enter a number : ");
    scanf("%d",&no);

    ld=no%10;

    temp=no;
    while(no!=0)
    {
        no=no/10;
        d++;
    }
    no=temp;
    while(count<d)
    {
        no=no/10;
        count++;
        if(count==(d-1))
        fd=no;
    }

    sum=fd+ld;
    printf("Sum of first digit and last digit of ur entered number is : %d",sum);
}
