//program to print natural numbers from N to 1
#include<stdio.h>
main()
{
    int no,count;
    no=0;

    printf("Enter a number : ");
    scanf("%d",&no);

    for(count=no;count>0;count--)
    printf("%d\n",count);
}
