//program to keep on reading numbers from the user till the user inputs 0 and count number of even and odd numbers
#include<stdio.h>
main()
{
    int no,ec,oc;
    ec=oc=0;no=1;

    while(no!=0)
    {
        printf("Enter a Number : ");
        scanf("%d",&no);

        if(no%2==0)
            ec++;
        else
            oc++;
    }

    printf("Total number of even numbers are : %d\n",ec);
    printf("Total number of odd numbers are : %d\n",oc);

}
