/*program to print fibonacci series from 1 to 100
1 1 2 3 5 8 13 ... 100 */
#include<stdio.h>
main()
{
    int a,b,c;
    a=0; b=1;

    printf("1\t");

    for(c=0;c<=82;++c)
    {
       c=a+b;
       printf("%d\t",c);
       a = b;
       b = c;
    }
}

