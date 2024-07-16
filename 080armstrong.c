//program to print all armstrong numbers from 100 to 1000
#include<stdio.h>
main()
{
    int no,fd,sd,td,temp,sum;
    fd=sd=td=temp=sum=0;

    for(no=101;no<1000;no++)
    {
        temp=no;
        td=no%10;
        no=no/10;
        sd=no%10;
        no=temp;
        fd=no/100;

        fd=fd*fd*fd;
        sd=sd*sd*sd;
        td=td*td*td;

        sum = fd+sd+td;

        if(sum==no)
        {
            printf("%d\t",no);
        }
    }

}
