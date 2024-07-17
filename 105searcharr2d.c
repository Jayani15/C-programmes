//program to search for an element in 5*5 matrix
# include<stdio.h>
main()
{
    int arr[5][5],i,j,key,flag=0;

    srand(time(0));
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j]=(rand()%100)+1;
        }
    }

    printf("\nThe Array : ");
    printf("\n------------\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }

    printf("\nEnter the element u want to search : ");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==key)
            {
                printf("\n%d is found at index (%d,%d)\n",key,i,j);
                flag=1;
                break;
            }
        }
    }

    if(flag==0)
        printf("\n%d is not found\n",key);

}
