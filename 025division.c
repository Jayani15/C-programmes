//program to compute quotient and remainder
#include<stdio.h>
main()
{
    int a,b,quo,rem;

    printf("Enter the Dividend : ");
    scanf("%d",&a);

    printf("Enter the Divisor : ");
    scanf("%d",&b);

    quo = a/b;
    rem = a%b;

    printf("The quotient is %d and the remainder is %d",quo,rem);
}
