//program to fill array of 10 random numbers and count number of digits of each element in the array
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
    int arr[10],i,temp,d;
    i=temp=d=0;
    srand(time(0));

    for(i=0;i<=9;i++)
    {
        arr[i]=rand()%1000;
        printf("%d\n",arr[i]);
    }

    for(i=0;i<=9;i++)
    {
        temp=arr[i];
        while(arr[i]!=0)
        {
            arr[i]=arr[i]/10;
            d++;
        }
        arr[i]=temp;
        printf("\nNumber of digits in %d are %d\n",arr[i],d);
        d=0;
    }
}
