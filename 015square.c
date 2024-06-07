//program to evaluate (A+B)^2
#include<stdio.h>
main()
{
    int a,b,c;

    printf("Enter a number A : ");
    scanf("%d",&a);

    printf("Enter a number B : ");
    scanf("%d",&b);

    c = (a*a) + (b*b) + (2*a*b) ;

    printf("The Value of (A+B)^2 is : %d",c);
}
