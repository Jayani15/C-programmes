//program to split a bill among friends
#include<stdio.h>
main()
{
    int total,friends;
    float tip,each;

    printf("Enter Total Bill Amount : ");
    scanf("%d",&total);

    printf("Enter the TIP(5%% or 10%%) : ");
    scanf("%f",&tip);

    printf("Enter total number of Friends : ");
    scanf("%d",&friends);

    each = (total + (tip/100)*total)/friends;

    printf("Each One have to pay %f /-",each);
}
