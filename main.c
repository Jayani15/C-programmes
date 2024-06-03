//program to print your name, date of birth and number

#include <stdio.h>

char name[30],mon[10];
int date,yr,num;

main()
{
    printf ("Enter Your Name : ");
    scanf ("%s",&name);
    
    printf ("Enter Your date of birth (in the format month dd yyyy) : ");
    scanf("%s",&mon);
    scanf("%d",&date);
    scanf("%d",&yr);
    
    printf("Enter Your Mobile Number : ");
    scanf("%d",&num);
    
    printf("\nYour Name is : %s ",name);
    printf("\nYour date of birth is : %s %d,%d",mon,date,yr);
    printf("\nYour Mobile number is : +91-%d ",num);
}
