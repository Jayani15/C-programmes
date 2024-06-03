// program to calculate total and average of 5 subjects
#include <stdio.h>

int m,p,c,e,s;
float tot,avg;

 main()
{
  printf("Enter Your English marks : ");
  scanf("%d",&e);
   
  printf("Enter Your Sanskrit marks : ");
  scanf("%d",&s);
  
  printf("Enter Your Math marks : ");
  scanf("%d",&m);
  
  printf("Enter Your Physics marks : ");
  scanf("%d",&p);
  
  printf("Enter Your Chemistry marks : ");
  scanf("%d",&c);
  
  tot = e+s+m+p+c;
  avg = tot/3;
  
  printf("Your total is : %f",tot);
  printf("Your average is : %f",avg);
  
}
