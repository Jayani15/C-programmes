//program to find minimum and maximum number from the array of 10 inputted numbers
# include <stdio.h>
main()
{
    int arr[10],i,max,min;

    for(i=0;i<=9;i++)
    {
        printf("\nEnter a Number : ");
        scanf("%d",&arr[i]);
    }

    max=arr[0];

    for(i=0;i<=9;i++)
    {
       if(arr[i]>max)
            max=arr[i];
    }

    printf("\nMaximum Number : %d\n",max);

    min=arr[0];

    for(i=0;i<=9;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    printf("\nMinimum Number : %d\n",min);
}
