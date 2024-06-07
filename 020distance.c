//program to convert kilometers to meters
#include<stdio.h>
main()
{
    float km,m;

    printf("Enter the distance Travelled by the bus from A to B in kilometers : ");
    scanf("%f",&km);

    m = km*1000;

    printf("The distance Travelled by the bus from A to B in meters is : %f",m);
}
