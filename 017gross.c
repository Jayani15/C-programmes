//Program to calculate gross and net salary from the input basic salary allowances and deductions
#include<stdio.h>
main()
{
    int basic,allowance,deduction,gross,net;

    printf("Enter The Basic Salary : ");
    scanf("%d",&basic);

    printf("Enter Allowances : ");
    scanf("%d",&allowance);

    printf("Enter Deductions : ");
    scanf("%d",&deduction);

    gross = basic+allowance;
    net = gross-deduction;

    printf("Gross Salary : %d",gross);
    printf("Net Salary : %d",net);
}
