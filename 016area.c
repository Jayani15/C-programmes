//program to calculate area of a circle
#include<stdio.h>
main()
{
    float radius,area;
    const float PI = 3.14 ;

    printf("Enter The Radius of a Circle :");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("The Area of the Circle is : %.2f",area);
}
