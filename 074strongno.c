/* program to check if a number is strong number or not
strong no is a no in which whose sum of factorials of its digits equals the number itself*/
#include<stdio.h>
main()
{
    int count,no,sum,temp1,temp2,factorial;
    no=sum=temp1=temp2=0;
    factorial=1;

    printf("Enter a number : ");
    scanf("%d",&no);

    temp1=no;
    temp2=no;

    while(no!=0)
    {
        temp1 = no%10;
        for(count=1;count<=temp1;count++)
        {
            factorial =  factorial * count;
        }
        no = no/10;
        sum = sum+factorial;
        factorial=1;
    }

   no=temp2;

    if(sum==no)
        printf("%d is a Strong number",no);
    else
        printf("%d is not a strong number",no);
}
