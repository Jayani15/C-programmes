//program to convert rupees into paise
#include<stdio.h>
main()
{
    float rupees,paise;

    printf("Enter The value in Rupees : ");
    scanf("%f",&rupees);

    paise = rupees * 100;

    printf("The Value in Paise is : %f",paise);

}
