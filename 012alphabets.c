//Program to read capital alphabets and display in lower case
#include<stdio.h>
main()
{
    char x,y;

    printf("Enter any Upper Case Alphabet from A to Z : ");
    scanf("%c",&x);

    y=x+32;

    printf("Lower case form of %c is %c",x,y);
}
