//program to insert an element in the array of N elements
# include <stdio.h>
main()
{
    int i,n,x,pos;

    printf("Enter how many numbers u want to input : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
       printf("Enter an element : ");
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d-%d\n",i,arr[i]);
    }

    printf("\nEnter a new element : ");
    scanf("%d",&x);
    printf("\nAt what position does %d needs to be inserted [0 to %d] : ",x,n);
    scanf("%d",&pos);

    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=x;

    printf("\nNew array after %d being inserted : ",x);

    for(i=0;i<=n;i++)
    {
        printf("\n%d-%d",i,arr[i]);
    }
    printf("\n");
}
