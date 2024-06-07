//program to convert fahrenheit to degree celcius
#include<stdio.h>
main()
{
    float c,f;

    printf("Enter The Temperature in Fahrenheit : ");
    scanf("%f",&f);

    c = (32-f)*5/9;

    printf("The Temperature in Degree Celcius : %f",c);

}
