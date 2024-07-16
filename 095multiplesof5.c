//program to fill the array of N elements of multiples of 5 and copy to another array and printf
# include<stdio.h>
main()
{
    int arr[100],i,n;
    n=0;

    printf("Enter how many multiples of 5 u need : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        arr[i]=5*i;
        printf("5 * %d = %d\n",i,arr[i]);
    }
}
