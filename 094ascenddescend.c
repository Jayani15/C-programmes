//program to fill the array of 10 elements with random numbers and sort them in ascending and descending order and print separately
#include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
    int arr[10],i,temp,j;
    srand(time(0));

    printf("Original Array : ");
    printf("\n-----------------\n");

    //for descending order
    for(i=0;i<=9;i++)
    {
        arr[i]=rand()%100;
        printf("%d-%d\n",i,arr[i]);
    }

    for(i=0;i<=9;i++)
    {
        for(j=0;j<9-i;j++)
        {
          if(arr[j]<arr[j+1])
          {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
    }
     printf("\nDescending order : ");
     printf("\n------------------\n");

     //for ascending order
     for(i=0;i<=9;i++)
        printf("%d\n",arr[i]);

     for(i=0;i<10;i++)
     {
         for(j=0;j<10-i;j++)
         {
             if(arr[j]>arr[j+1])
             {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
         }
     }

     printf("\nAscending Order : ");
     printf("\n-----------------\n");

     for(i=0;i<=10;i++)
      printf("%d\n",arr[i]);

}
