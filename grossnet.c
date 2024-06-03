//program to read salary and print gross and net salary
#include <stdio.h>

int sal;
float hra,da,pf,gross,net;

main()
{
   printf("Enter Your Salary : ");
   scanf("%d",&sal);
   
   hra = 0.2*sal;
   da = 0.1*sal;
   pf = 0.05*sal;
   
   gross = sal + hra + da;
   net = gross - pf;
   
   printf("\nYour Gross salary is : %f",gross);
   printf("\nYour Net salary is : %f",net);
   
}
