//program to calculate electricity bill
#include<stdio.h>
main()
{
    float present,last,total;
    const float RATE = 7.85;

    printf("Enter Present Month Reading : ");
    scanf("%f",&present);

    printf("Enter Last Month Reading : ");
    scanf("%f",&last);

    total = (present + last) * RATE ;

    printf("The Electricity bill is %f",total);
}
