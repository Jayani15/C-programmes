//program to check if the inputted number is prime or not
#include<stdio.h>
#include<math.h>
main()
{
    int no,count,d;
    char isprime='y';
    no=0;

    printf("Enter a number : ");
    scanf("%d",&no);

    d = sqrt(no);

    for(count=2;count<=d;count++)
    {
        if(no%count==0)
        {
            isprime='n';
            break;
        }
    }

    if(isprime=='n')
        printf("%d is not a prime number",no);
    else
        printf("%d is a prime number",no);

    printf("\nNo of iterations are %d\n",count);
}
