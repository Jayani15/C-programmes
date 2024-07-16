//program to generate 10 random numbers and display the biggest
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    int x,c,big;
    srand(time(0));

    for(c=1;c<=10;c++)
    {
        x=rand()%100;
        printf("%d\n",x);

        if(x>big)
            big=x;
    }

    printf("Biggest number is : %d",big);

}
