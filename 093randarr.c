/*program to fill the the array of 10 elements with random numbers
print even numbers odd numbers and prime numbers separately
random numbers must not exceed 999*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
  main()
  {
        int arr[10],i,count;
        char isprime='y';

        srand(time(0));

        for(i=1;i<=10;i++)
        {
            arr[i]=rand()%1000;
            printf("%d\t",arr[i]);
        }

        printf("\n\nEven Numbers:\n");
        for(i=1;i<=10;i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d\n",arr[i]);
            }
        }

        printf("\nOdd Numbers:\n");
        for(i=1;i<=10;i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d\n",arr[i]);
            }
        }

        printf("\nPrime Numbers:\n");
        for(i=1;i<=10;i++)
        {
            isprime = 'y';
            if(arr[i] <= 1)
                isprime = 'n';
            else
            {
              for(count = 2;count <= sqrt(arr[i]);count++)
              {
                if(arr[i]%count==0)
                {
                    isprime = 'n';
                    break;
                }
              }
            }

            if(isprime == 'y')
                printf("%d\n",arr[i]);
        }
  }
