//program to read a positive number and print its factorial
#include<stdio.h>
main()
{
    int no,factorial,i;
    factorial=1;

    printf("Enter a number : ");
    scanf("%d",&no);

    for(i=no;i>=1;i--)
    {
        factorial = factorial * i;
    }

    printf("Factorial of the number %d is %d\n",no,factorial);
}
