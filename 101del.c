//program to delete an element from the array of N elements
# include <stdio.h>
main()
{
    int i,n,del;

    printf("Enter how many elements u want to input : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter a number : ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array :\n");

    for(i=0;i<n;i++)
    {
        printf("%d--%d\n",i,arr[i]);
    }

    printf("\nEnter the index[0-%d] u want to delete : ",n-1);
    scanf("%d",&del);

    if(!(del>=0 && del<n))
    {
        printf("Invalid Index..\n");
        exit(0);
    }

    for(i=del+1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }

    printf("\nModified Array:");
    for(i=0;i<n-1;i++)
    {
        printf("\n%d--%d",i,arr[i]);
    }
}
