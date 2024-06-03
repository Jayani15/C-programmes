//proram to swap two value without 3rd variable
#include <stdio.h>

int a,b;

main()
{
    printf("Enter the value of A : ");
    scanf("%d",&a);
    
    printf("Enter the value of B : ");
    scanf("%d",&b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\nThe Value of A is : %d",a);
    printf("\nThe Value of B is : %d",b);
    
}
