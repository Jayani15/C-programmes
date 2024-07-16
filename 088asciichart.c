//program to print ASCII Chart
#include<stdio.h>
main()
{
    int no;

    for(no=0;no<=255;no++)
    {
        printf("%d-%c\n",no,no);
    }
    printf("\n");
}
