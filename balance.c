// program to read the bill amount, amount paid by the customer and the balance
#include <stdio.h>

int tot,paid,bal;

main()
{
    printf("Enter the Total Bill Amount : ");
    scanf("%d",&tot);
    
    printf("Enter the amount paid by the customer : ");
    scanf("%d",&paid);
    
    bal=tot-paid;
    
    printf("Amount to be paid is %d",bal);
    
}
