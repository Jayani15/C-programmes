/*program to check weather the inputted number is perfect number or not
perfect number is a number in which the sum of its divisors (except itself) add up to the number*/
#include<stdio.h>
main()
{
    int d,no,sum;
    no=sum=0;

    printf("Enter a number : ");
    scanf("%d",&no);

    for(d=1;d<no;d++)
    {
        if(no%d==0)
        {
            sum = sum+d;
        }
    }
    if(sum=no)
        printf("%d is a Perfect number",no);
    else
        printf("%d is not a Perfect number",no);
}
