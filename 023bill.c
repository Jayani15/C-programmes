//program to read the quantity and price per kg of rice and calculate bill
#include<stdio.h>
main()
{
    int qty;
    float rate,billamt;

    printf("Enter The Quantity of Rice Purchased : ");
    scanf("%d",&qty);

    printf("Enter the price of Rice for 1 Kg : ");
    scanf("%f",&rate);

    billamt = rate*qty;

    printf("The Bill Amount is : %.2f",billamt);
}
