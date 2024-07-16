//program to fill the array of 10 elements with even numbers at odd index and odd numbers at even index
#include<stdio.h>
main()
{
    int arr[10],i;

    for(i=0;i<=9;i++)
    {
        arr[i]=i+1;
        printf("%d-%d\n",i,arr[i]);
    }
}
