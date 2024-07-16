//program to print prime numbers between two given positive numbers
#include<stdio.h>
main()
{
    int a,b,c,count;
    char isprime;
    a=b=0;

    printf("Enter First number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    if(b>a && a>1)
    {
        for(c=a;c<=b;c++)
        {
            isprime='y';
            for(count=2;count<=sqrt(c);count++)
            {
                if(c%count == 0)
                {
                    isprime='n';
                   break;
                }
            }
            if(isprime=='y')
            {
                printf("%d\t",c);
            }
        }
    }
    else
        printf("Invalid Range..");
}
