// program to calculate bill of iphone and its cover case
#include <stdio.h>

int a,b,tot;

main()
{
    //input
  printf("Enter the price of the IPhone : ");
  scanf("%d",&a);
  
  printf("Enter the price of the Cover case : ");
  scanf("%d",&b);
  
  //process
  tot=a+b;
  
  //output
  printf("Your Total Bill Amount is : %d",tot);
  
}
