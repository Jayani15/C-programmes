//program to find frequency of each element from the array of N elements
# include <stdio.h>
main()
{
    int arr[100],i,no,freq,j;
    i=no=j=0;
    freq=0;

    printf("Enter number of elements : ");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("\nEnter a number : ");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<no;i++)
    {
        freq=0;
        for(j=0;j<no;j++)
        {
            if(arr[j]==arr[i])
                freq++;
        }
        printf("\nThe frequency of %d is %d\n",arr[i],freq);
    }
}
