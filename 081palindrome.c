//program to check if a vehicle number is a palindrome or not
#include<stdio.h>
main()
{
    int no=0,rev=0,temp=0,rem;

    printf("Enter a Vehicle number : ");
    scanf("%d",&no);

    if(no>=1000 && no<=9999)
    {
        temp=no;
        while(no!=0)
        {
           rem=no%10;
           rev=(rev*10) + rem;
           no=no/10;
        }
        no=temp;

        if(no==rev)
            printf("%d is a palindrome\n",no);
        else
            printf("%d is not a palindrome\n",no);
    }
    else
        printf("Please Enter a valid Vehicle number\n");
}
