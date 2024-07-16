//program to read table number, starting and ending values and print the table from starting value to ending value
#include<stdio.h>
main()
{
    int table,start,end,count,res[100]={0};
    table=start=end=0;

    printf("Enter Table number : ");
    scanf("%d",&table);
    printf("Enter Starting Value : ");
    scanf("%d",&start);
    printf("Enter Ending Value :");
    scanf("%d",&end);

    for(count=start;count<=end;count++)
    {
        res[count] = table * count ;
        printf("%d * %d = %d\n",table,count,res[count]);
    }
}
