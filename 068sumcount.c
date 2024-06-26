//program to read 10 numbers and display sum of even numbers and odd numbers along with count
#include<stdio.h>
main()
{
    int count,no,ec,oc,sume,sumo;
    no=ec=oc=sume=sumo=0;

    for(count=1;count<=10;count++)
    {
        printf("Enter a number : ");
        scanf("%d",&no);

        if(no%2==0)
        {
            ec++;
           sume=sume+no;
        }
        else
        {
            oc++;
            sumo=sumo+no;
        }
    }

    printf("\nTotal even numbers are %d",ec);
    printf("\nSum of even numbers are %d",sume);
    printf("\nTotal odd numbers are %d",oc);
    printf("\nSum of odd numbers are %d\n",sumo);
}
