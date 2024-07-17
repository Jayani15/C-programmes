//program to print upper triangle and lower triangle of 5*5 array
# include <stdio.h>
main()
{
    int arr[5][5],i,j;

    srand(time(0));
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j]=(rand()%100)+1;
        }
    }

    printf("\nThe Array : ");
    printf("\n-----------\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }

    printf("\nLower Triangle");
    printf("\n--------------\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }
   printf("\nUpper Triangle");
    printf("\n--------------\n");

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }
}
