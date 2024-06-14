//program to accept two integer values and print accordingly
#include<stdio.h>
main()
{
    int a,b;

    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);

    if(a<b)
        printf("UP");
    else
        if(a>b)
           printf("DOWN");
        else
            printf("EQUAL");
}
