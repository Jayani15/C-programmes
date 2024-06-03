//program to read 3 characters and print them in reverse
#include<stdio.h>

char a,b,c;

main()
{
    printf("Enter 3 characters of your choice : ");
    scanf("%c",&a);
    scanf("%c",&b);
    scanf("%c",&c);
    
    printf ("Reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);
}