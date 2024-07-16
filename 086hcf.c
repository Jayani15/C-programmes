//program to find HCF of 2 numbers
#include<stdio.h>
main()
{
    int a,b,hcf,lowest;
    a=b=hcf=lowest=0;

    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        lowest = b;
    else
        lowest = a;

    for(hcf=lowest;hcf>=1;hcf--)
    {
        if(a%hcf==0 && b%hcf==0)
        {
            printf("Hcf of %d and %d is %d",a,b,hcf);
            break;
        }
    }
}
