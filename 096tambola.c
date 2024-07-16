//program to build a tambola application
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
  int arr[90],i;

  srand(time(0));

  for(i=1;i<=90;i++)
  {
      arr[i]=rand()%100;
      printf("%d\n",arr[i]);
  }
}
