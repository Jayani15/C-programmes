//program to find LCM of 2 numbers
#include<stdio.h>
main()
{
    int a,b,lcm;
    a=b=lcm=0;

    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);

    for(lcm=2;lcm<=a*b;lcm++)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,lcm);
            break;
        }
    }
}
